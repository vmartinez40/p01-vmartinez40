#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    srand ( time(NULL) );
   
    int guess;
    int g1;int g2; int g3;
    int r;
    int randomNumber;
    string mode;
    /*
    randomNumber = rand() % 10 + 1
    cout<<"Guess a number between 1 and 10.";
    cin>>guess;
    */
    // Starting message that greets player and asks them to choose difficulty
    cout<<"Welcome! Choose your difficulty!"<<endl;
    cout<<"Input e for easy, m for Medium, h for Hard."<<endl;
    cin>>mode;
    if(mode == "e")
    {
        randomNumber = rand() % 2 + 1;
        cout<<"Choose a number between 1 and 2! You only get 1 guess!"<<endl;
        cin>>guess;
        
    }
    else if(mode == "m")
    {
        randomNumber = rand() % 10 + 1;
        cout<<"Choose a number between 1 and 10! You only get 2 guesses!"<<endl;
        cin>>guess;
        if(guess > randomNumber)
        {
            cout<<"Your guess is higher than the secret number! You have 1 guess left!"<<endl;
            cin>>guess;
        }
        else
        {
            cout<<"Your guess is lower than the secret number! You have 1 guess left!"<<endl;
            cin>>guess;
        }
    }
    if(guess == randomNumber)
    {
        cout<<"You, guessed correctly! You win!";
    }
    else if(guess != randomNumber)
    {
        if(guess > randomNumber)
        {
            r = guess - randomNumber;
            cout<<"You were off by "<<r<<". Sorry, you lose."<<endl;
        }
        else
        {
        r = randomNumber - guess;
        cout<<"You were off by "<<r<<". Sorry, you lose."<<endl;
        }
    }
    
    return 0;
}
