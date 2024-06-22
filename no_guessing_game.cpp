#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   
    srand(time(0));

    int randomNumber = rand() % 100 + 1;
    int guess;
    cout<<"WELCOME TO GUESS THE NO. GAME\n";

    cout << "Guess the number (1 to 100): ";
    do {
       cin >> guess;

       
        if (guess > randomNumber) 
        {
        cout << " "<<guess<<" is too high!\nTry again\n ";
        } 
        else if (guess < randomNumber)
         {
            cout <<" "<<guess<<" is too low!\nTry again\n\n" ;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
        }
    } while (guess != randomNumber);

    

    return 0;
}
