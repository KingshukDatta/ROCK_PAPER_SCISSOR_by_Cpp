// We are going to create a game called ROCK-PAPER-SCISSOR using C++.
#include <iostream>
#include <ctime>

// Function declarations.
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

// Main function.
int main(){
    // Declaring variables.
    char player;
    char computer;

    // Invoking functions.
    player = getUserChoice();

    // Displaying Player's Choice.
    std::cout <<"Your Choice is ";
    showChoice(player);

    // Displaying Computer's Choice.
    computer = getComputerChoice();
    std::cout <<"Computer's Choice is ";
    showChoice(computer);

    // Invoking chooseWinner function.
    chooseWinner(player, computer);

    // Ending display message.
    std::cout << "\n";
    std::cout << "*************************************\n";
    std::cout << " Thanks for playing. SEE YOU SOON!\n";
    std::cout << "*************************************\n";
    return 0;
}

// Function definitions.
char getUserChoice(){
    // Defining local variables.
    char player;

    // Welcome Message.
    std::cout << "*************************************\n";
    std::cout << " Welcome to ROCK-PAPER-SCISSOR game!\n";
    std::cout << "*************************************\n";

    // Defining keywords for the game.
    // Do-While loop to ensure the right keyword is pressed.
    // Note: We cannot escape the while loop unless we choose any of the 3 keywords. 
    do{
        std::cout << "*************************************\n";
        std::cout << "    Choose one of the following\n";
        std::cout << "*************************************\n";
        std::cout << "'r' for ROCK\n";
        std::cout << "'p' for PAPER\n";
        std::cout << "'s' for SCISSOR\n";

        // Input from the player.
        std::cin >> player;

    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;

}
char getComputerChoice(){

    // Seeding the random number generator.
    srand(time(NULL));
    // A modulus can not excite the number which is used to do module.
    // the module number will be between (0-2). That's why we are doing plus 1 so that the range becomes (1-3)
    int num = rand() % 3 +1;

    // Creating switch case for returning keywords for the game.(r, p, s)
    switch (num)
    {
        case 1: return 'r'; // "ROCK"

        case 2: return 'p'; //"PAPER"

        case 3: return's'; //"SCISSOR"

    }
    return 0;
}
void showChoice(char choice){
    // Switch statement to display the choice.
    switch(choice) {
        case 'r': std::cout << "ROCK\n"; 
                    break;
        case 'p': std::cout << "PAPER\n"; 
                    break;
        case 's': std::cout << "SCISSOR\n"; 
                    break;
    }

}
void chooseWinner(char player, char computer){

    switch (player)
    {
        // Case 1:when player chooses "ROCK".
        case 'r': if(computer == 'r'){
                    std::cout << "*************\n";
                    std::cout << " It's a tie!\n";
                    std::cout << "*************\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "*************\n";
                        std::cout << " You lose!\n";
                        std::cout << "*************\n";
                    }
                    else{
                        std::cout << "*************\n";
                        std::cout << " You win!\n";
                        std::cout << "*************\n";
                    }
                    break;
        case 'p': if(computer == 'r'){
                    std::cout << "*************\n";
                    std::cout << "  You Win!\n";
                    std::cout << "*************\n";
                     }
                    else if(computer == 'p'){
                        std::cout << "*************\n";
                        std::cout << " It's a tie!\n";
                        std::cout << "*************\n";
                    }
                    else{
                        std::cout << "*************\n";
                        std::cout << " You Lose!\n";
                        std::cout << "*************\n";
                    }
                    break;
        case 's': if(computer == 'r'){
                        std::cout << "*************\n";
                        std::cout << " You Lose!\n";
                        std::cout << "*************\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "*************\n";
                        std::cout << " You Win!\n";
                        std::cout << "*************\n";
                    }
                    else{
                        std::cout << "*************\n";
                        std::cout << " It's a tie!\n";
                        std::cout << "*************\n";
                    }
                    break;
        

    }
}