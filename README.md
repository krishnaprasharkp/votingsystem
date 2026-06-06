<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=700&size=40&pause=1000&color=FFFFFF&center=true&vCenter=true&width=700&lines=🗳️+Voting+System+in+C%2B%2B" />

</div>

A console-based **Voting System** built using **C++** that allows users to cast votes, prevents duplicate voting using voter IDs, stores voting records in files, and displays election results.

This project demonstrates basic concepts of **C++ programming, file handling, vectors, classes, encapsulation, and menu-driven application design**.

---

##  Project Overview

The Voting System is a simple digital voting application where:

- A voter enters a unique Voter ID.
- The system checks whether the voter has already voted.
- If the voter is new, they can choose a candidate.
- The vote is saved permanently in a file.
- The voter ID is stored to prevent duplicate voting.
- Admin can view the final voting results.

---

##  Features

- Cast vote using unique Voter ID
- Prevent duplicate voting
- Display candidate list
- Store votes using file handling
- Store voter IDs separately
- View voting results
- Menu-driven console interface
- Simple and beginner-friendly C++ implementation

---

##  Tech Stack

| Technology | Purpose |
|----------|---------|
| C++ | Main programming language |
| File Handling | Store votes and voter records |
| Vectors | Store candidates and vote counts |
| OOP | Manage voting logic using class |
| Console I/O | User interaction |

---

##  Project Structure

```bash
votingsystem/
│
├── voting.cpp        # Main source code of the voting system
├── voters.txt        # Stores voter IDs after voting
├── votes.txt         # Stores vote choices
└── README.md         # Project documentation
```

---

##  File Explanation

### `voting.cpp`

This is the main program file. It contains:

- Candidate list
- Vote counting logic
- Voter ID checking
- Vote saving mechanism
- Result display function
- Main menu system

### `voters.txt`

This file stores voter IDs of users who have already voted.

Example:

```txt
V001
V002
V003
```

This helps the system prevent the same voter from voting again.

### `votes.txt`

This file stores the candidate choice number selected by voters.

Example:

```txt
1
2
1
3
```

Each number represents a vote given to a candidate.

---

##  Concepts Used

- Classes and Objects
- Encapsulation
- Vectors
- File Handling
- Conditional Statements
- Loops
- Functions
- Menu-Driven Programming
- Basic Data Validation

---

##  How the System Works

```text
Start Program
     |
     v
Display Menu
     |
     |-- 1. Cast Vote
     |       |
     |       v
     |   Enter Voter ID
     |       |
     |       v
     |   Check voters.txt
     |       |
     |       |-- Already Exists → Reject Vote
     |       |
     |       |-- New Voter → Show Candidates
     |                         |
     |                         v
     |                    Save Vote
     |                         |
     |                         v
     |                    Save Voter ID
     |
     |-- 2. View Results
     |       |
     |       v
     |   Read votes.txt
     |       |
     |       v
     |   Count Votes
     |       |
     |       v
     |   Display Results
     |
     |-- 3. Exit
```

---

##  Code Explanation

### 1. Candidate and Vote Storage

```cpp
vector<string> candidates = {"pegwant mann", "sukha", "majithia"};
vector<int> votes = {0, 0, 0};
```

- `candidates` stores the names of candidates.
- `votes` stores vote count for each candidate.
- Both vectors are related by index.

Example:

```text
candidates[0] = pegwant mann
votes[0] = votes received by pegwant mann
```

---

### 2. Checking Duplicate Voters

```cpp
bool hasVoted(const string& voterID)
```

This function checks whether a voter ID already exists in `voters.txt`.

If the voter ID is found, the system does not allow the user to vote again.

---

### 3. Saving Voter ID

```cpp
void saveVoter(const string& voterID)
```

This function stores the voter ID inside `voters.txt` after successful voting.

---

### 4. Saving Vote

```cpp
void saveVote(int choice)
```

This function stores the selected candidate number inside `votes.txt`.

---

### 5. Loading Votes

```cpp
void loadVotes()
```

This function reads all vote choices from `votes.txt` and calculates total votes for each candidate.

---

### 6. Showing Results

```cpp
void showResults()
```

This function displays candidate-wise voting results.

---

##  How to Run

### Step 1: Clone the Repository

```bash
git clone https://github.com/krishnaprasharkp/votingsystem.git
```

### Step 2: Open Project Folder

```bash
cd votingsystem
```

### Step 3: Compile the Code

```bash
g++ voting.cpp -o voting
```

### Step 4: Run the Program

```bash
./voting
```

For Windows:

```bash
voting.exe
```

---

##  Sample Output

```text
=== Online Voting System ===
1. Cast Vote
2. View Results (Admin)
3. Exit
Enter your choice: 1

Enter your Voter ID: V001

--- Candidate List ---
1. pegwant mann
2. sukha
3. majithia

Enter your choice (1-3): 1
Vote cast successfully!
```

If the same voter tries again:

```text
Enter your Voter ID: V001
You have already voted!
```

Result output:

```text
--- Voting Results ---
pegwant mann: 2 votes
sukha: 1 votes
majithia: 1 votes
```

---

##  Duplicate Vote Prevention

The system prevents duplicate voting by storing every successful voter ID in `voters.txt`.

Before allowing a vote, the program checks:

```text
Is this voter ID already present in voters.txt?
```

If yes, the vote is rejected.

If no, the voter is allowed to vote.

---

##  Data Storage Logic

This project uses simple file-based storage.

| File | Purpose |
|----|---------|
| `voters.txt` | Stores voter IDs |
| `votes.txt` | Stores candidate choices |

This makes the vote data persistent even after the program closes.

---

##  Limitations

- No admin password protection
- No database integration
- No GUI interface
- Candidate names are hardcoded
- Voter ID is entered manually
- Results can be viewed by anyone from the menu

---

##  Future Improvements

- Add admin login system
- Add password-protected result viewing
- Use database like MySQL or SQLite
- Add GUI using Qt or web interface
- Add candidate registration feature
- Add voter registration feature
- Encrypt vote records
- Add result percentage and winner declaration
- Improve input validation

---

##  Learning Outcomes

Through this project, I practiced:

- Building a complete menu-driven C++ project
- Applying Object-Oriented Programming concepts
- Using file handling for persistent storage
- Preventing duplicate user actions
- Designing simple real-world system logic
- Managing data using vectors

---

##  Author

**Krishna Prashar**  
B.Tech Computer Science & Engineering  
Guru Nanak Dev University, Amritsar  

GitHub: [krishnaprasharkp](https://github.com/krishnaprasharkp)

---

##  Support

If you found this project helpful, consider giving it a star ⭐ on GitHub.

---

##  Repository

[GitHub Repository](https://github.com/krishnaprasharkp/votingsystem)
