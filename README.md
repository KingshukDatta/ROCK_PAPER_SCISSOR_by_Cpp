# ✊✋✌️ Rock-Paper-Scissors (C++)

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Console](https://img.shields.io/badge/console-application-4EAA25?style=for-the-badge)

A classic **Rock-Paper-Scissors** game played against the computer via the command line. This project demonstrates basic C++ concepts including functions, switch statements, input validation, and random number generation.

## 🎮 How It Works

The program is broken down into modular functions to handle specific tasks:

### 1. User Input (`getUserChoice`)
* The program prompts the player to enter a character:
    * `'r'` for Rock
    * `'p'` for Paper
    * `'s'` for Scissors
* **Input Validation:** It uses a `do-while` loop to ensure the user enters a valid character. If an invalid key is pressed, it keeps asking until a valid input is received.

### 2. Computer Logic (`getComputerChoice`)
* The computer's move is generated randomly.
* **Seeding:** `srand(time(NULL))` is used to seed the random number generator so the result changes every time you run the program.
* **Logic:** It generates a number between 1 and 3:
    * 1 = Rock (`r`)
    * 2 = Paper (`p`)
    * 3 = Scissors (`s`)

### 3. Determining the Winner (`chooseWinner`)
* The program compares the player's choice against the computer's choice using nested `switch` and `if-else` statements.
* **Rules:**
    * Rock beats Scissors.
    * Scissors beats Paper.
    * Paper beats Rock.
    * Same choice results in a Tie.

## 🚀 How to Compile and Run

You need a C++ compiler (like G++, Clang, or MSVC) installed on your system.

1.  **Save the file:**
    Save the code as `main.cpp`.

2.  **Compile the code:**
    Open your terminal or command prompt and run:
    ```bash
    g++ main.cpp -o rock_paper_scissors
    ```

3.  **Run the game:**
    * **Windows:**
        ```bash
        rock_paper_scissors.exe
        ```
    * **Mac/Linux:**
        ```bash
        ./rock_paper_scissors
        ```

## 📸 Example Gameplay

```text
*************************************
 Welcome to ROCK-PAPER-SCISSOR game!
*************************************
*************************************
    Choose one of the following
*************************************
'r' for ROCK
'p' for PAPER
's' for SCISSOR
r
Your Choice is ROCK
Computer's Choice is SCISSOR
*************
 You win!
*************

*************************************
 Thanks for playing. SEE YOU SOON!
*************************************
