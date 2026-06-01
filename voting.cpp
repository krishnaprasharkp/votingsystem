#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class VotingSystem {
private:
    vector<string> candidates = {"pegwant mann", "sukha", "bikramsinghmajithia"};
    vector<int> votes = {0, 0, 0};

    bool hasVoted(const string& voterID) {
        ifstream file("voters.txt");
        string id;
        while (file >> id) {
            if (id == voterID) {
                return true;
            }
        }
        file.close();
        return false;
    }

    void saveVoter(const string& voterID) {
        ofstream file("voters.txt", ios::app);
        file << voterID << endl;
        file.close();
    }

    void saveVote(int choice) {
        ofstream file("votes.txt", ios::app);
        file << choice << endl;
        file.close();
    }

public:
    void vote() {
        string voterID;
        cout << "\nEnter your Voter ID: ";
        cin >> voterID;

        if (hasVoted(voterID)) {
            cout << "You have already voted!\n";
            return;
        }

        cout << "\n--- Candidate List ---\n";
        for (int i = 0; i < candidates.size(); i++) {
            cout << i + 1 << ". " << candidates[i] << endl;
        }

        int choice;
        cout << "Enter your choice (1-" << candidates.size() << "): ";
        cin >> choice;

        if (choice < 1 || choice > candidates.size()) {
            cout << "Invalid choice!\n";
            return;
        }

        saveVote(choice);
        saveVoter(voterID);

        cout << "Vote cast successfully!\n";
    }

    void loadVotes() {
        ifstream file("votes.txt");
        int choice;
        while (file >> choice) {
            if (choice >= 1 && choice <= candidates.size()) {
                votes[choice - 1]++;
            }
        }
        file.close();
    }

    void showResults() {
        loadVotes();
        cout << "\n--- Voting Results ---\n";
        for (int i = 0; i < candidates.size(); i++) {
            cout << candidates[i] << ": " << votes[i] << " votes\n";
        }
    }
};

int main() {
    VotingSystem vs;
    int option;

    do {
        cout << "\n=== Online Voting System ===\n";
        cout << "1. Cast Vote\n";
        cout << "2. View Results (Admin)\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                vs.vote();
                break;
            case 2:
                vs.showResults();
                break;
            case 3:
                cout << "Exiting system...\n";
                break;
            default:
                cout << "Invalid option!\n";
        }
    } while (option != 3);

    return 0;
}
