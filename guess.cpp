#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    srand ( time(NULL) );
   
    int guess;
    int r;
    int randomNumber;
    string mode;
    string playAgain;

    // Starting message that greets player and asks them to choose difficulty
    cout<<"==============================================================================="<<endl;
    cout<<"Welcome, this is a number guessing game. Choose your difficulty!"<<endl;
    cout<<"Input e for easy, m for Medium, h for Hard."<<endl;
    
    cin>>mode;
    // Easy Mode
    if(mode == "e")
    {
        randomNumber = rand() % 2 + 1;
        cout<<"Choose a number between 1 and 2! You only get 1 guess!"<<endl;
        cin>>guess;
        
    }
    //Medium Mode
    else if(mode == "m")
    {
        randomNumber = rand() % 10 + 1;
        cout<<"Choose a number between 1 and 10! You only get 2 guesses!"<<endl;
        cin>>guess;
        if(guess > randomNumber)
        {
            cout<<"Your guess is greater than the secret number! You have 1 guess left!"<<endl;
            cin>>guess;
        }
        else
        {
            cout<<"Your guess is less than the secret number! You have 1 guess left!"<<endl;
            cin>>guess;
        }
    }
    //Hard Mode
    if(mode == "h")
    {
        randomNumber = rand() % 100 + 1;
        cout<<"Choose a number between 1 and 100! You only get 3 guesses!"<<endl;
        cin>>guess;
        if(guess > randomNumber)
        {
            cout<<"Your guess is greater than the secret number! You have 2 guesses left!"<<endl;
            cin>>guess;
            if(guess > randomNumber)
            {
                cout<<"Your guess is greater than the secret number! You have 1 guess left!"<<endl;
                cin>>guess;
            }
            else
            {
                cout<<"Your guess is less than the secret number! You have 1 guess left!"<<endl;
                cin>>guess;
            }
        }
        else if(guess < randomNumber)
        {
            cout<<"Your guess is less than the secret number! You have 2 gueses left!"<<endl;
            cin>>guess;
            if(guess > randomNumber)
            {
                cout<<"Your guess is greater than the secret number! You have 1 guess left!"<<endl;
                cin>>guess;
            }
            else
            {
                cout<<"Your guess is less than the secret number! You have 1 guess left!"<<endl;
                cin>>guess;
            }
        }
    }
    //Checks if guess is correct
    if(guess == randomNumber)
    {
        cout<<"You, guessed correctly! You win!"<<endl;
        cout<<"Would you like to play again? (Y/N)"<<endl;
        cin>>playAgain;

        if(playAgain == "Y")
        {
            main();
        }
        else
        {
            return 0;
        }
    }
    //Checks how off you are
    if(guess != randomNumber)
    {
        if(guess > randomNumber)
        {
            r = guess - randomNumber;
            cout<<"You were off by "<<r<<" places above the secret number. Sorry, you lose."<<endl;
            cout<<"Would you like to play again? (Y/N)"<<endl;
            cin>>playAgain;

            if(playAgain == "Y")
            {
                main();
            }
            else
            {
                return 0;
            }

        }
        else if(guess < randomNumber)
        {
            r = randomNumber - guess;
            cout<<"You were off by "<<r<<" places below the secret number. Sorry, you lose."<<endl;
            cout<<"Would you like to play again? (Y/N)"<<endl;
            cin>>playAgain;

            if(playAgain == "Y")
            {
                main();
            }
            else
            {
                return 0;
            }

        }
    }
    
    return 0;
}

