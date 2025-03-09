#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    srand(time(0));
    int secret_number = rand() % 100 + 1;
    int guess;
    int trial = 0; 
    int HP = 5;

    cout << "=== Number Roulette Game ===" << endl;
    cout << "Put your Guess Number below within 1 - 100!" << endl;
    cout << "You have " << HP << " left, enjoy the game!\n";

    while (HP > 0){
     cout <<"\nInput ur Guess : ";
     cin >> guess;
     trial++;

     if(guess > secret_number) {
        cout << "The number is too big! Try again lil.";
        HP--;
     } else if(guess > secret_number) {
        cout << "The number is too big! Try again lil.";
        HP--;
     } else {
        cout << "You guessed correctly within " << trial << " try";
        return 0;
     }
       cout << "Health left : " << HP << endl;
       
       if (HP == 0) {
         cout << "\nGame Over! You are have some serious skill issue. " << endl;
         cout << "The right number is : " << secret_number << endl;
       }
    }

    return 0;
    }