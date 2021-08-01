#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{

    int number, guess, nguess=1;
    srand(time(0));
    number=rand()%100 + 1;//generates a number between 11111 to 1001
    //cout<<number<<endl;
    //keep running the loop until the guessed.
    do
    {
      cout<<"Guess the number between 1 to 100\n";
      cin>>guess;
      if(guess>number)
      {
          cout<<"LOWER NUMBER PLEASE\n";
      }
      else if(guess<number)
      {
         cout<<"HIGHER NUMBER PLEASE\n";

      }
      else
      {
          cout<<"YOU GUESSED IN "<<nguess<<" ATTEMPS";
      }
      nguess++;
    }while(guess!=number);

}
