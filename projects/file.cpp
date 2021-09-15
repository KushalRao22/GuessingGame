/*
  This is a project that is a game. The game is to guess the random number(0-100) and display how many guesses it took. 
  After guessing right, the user will have an option to play again or quit

  By: Kushal Rao

  Last modified: 9/15/2021
*/

#Include <iostream>

using  namespace std;

int main() {
  bool playAgain = true;//If the player wants to play again and starts out as tru as the player will play at least one game
  while (playAgain){
    int ranNum;//Intialize the random Number
    int count = 0;//Intialize the count to keep track of guesses
    bool gotItRight = false; //Boolean to keep track of if player is in a round
    srand (time(NULL));  
    ranNum = rand() % 100; //Assgin random number to ranNum
    while(!gotItRight){//If the player has not got it right
        int guess;
	cout << "Guess a number (0-100)" << endl;
        cin >> guess;//Assgin user input to guess
        count++;//Add one to number of guesses
        if(guess == ranNum){//Case when player guesses right
         cout << "You got it right. It took you "<< count <<" tries. Would you like to  play again?(y/n)" << endl;
	 gotItRight = true;//to get out of a round a reset to first loop
        }
	//If guess is incorrect tell user what went wrong and repeat the guess loop
        else if ( guess < ranNum){
          cout << "Nope. Not quite. Guess higher" << endl;
        } 
        else if ( guess > ranNum){
          cout << "Nope. Not quite. Guess lower" << endl;
      } 
    }
      char yes_no; //Variable to keep track if user wants to continue playing
          cin >> yes_no;
          if(yes_no == 'n'){
            playAgain = false;
          }
  } 
}
