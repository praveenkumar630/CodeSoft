#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
   srand(time(0)); // This statement used to change the number 
   int random = rand()%250; //This is random num generation
   int guess = 0;
   int moves = 0;
   do
   {
        moves ++;
        cout << "Enter your guess :"<<endl;
        cin >> guess; 
        if (guess == random)
        {
            cout << "Congrats! You Win ,after "<< moves <<" moves"<<endl;
        }
        else if (guess < random)
        {
            cout << "Guessing number is too small:"<<endl;
        }
        else if(guess > random)
        {
            cout << "Guessing number is too large:"<<endl;
        }
        
   } while (guess != random);
   

    return 0;


}