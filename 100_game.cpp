#include<iostream>
#include<stdlib.h>
using namespace std;

/*
Program: 100 game
Date: 27 February 2022
Author: Omar Adel
Virsion: 1.0

*/

int sum = 0;

void player1_tern(){
    int num;
    cout<< "\nPlayer1\n choose number from 1 to 10: ";
    cin>> num;
    
    if(num >= 1 && num <= 10){
        sum += num;
    }else{
        cout<< "\nSOORY!!, Please enter number between 1 to 10 !!!";
        player1_tern();
    }
    

}
void player2_tern(){
    int num;
    cout<< "\nPlayer2\n choose number from 1 to 10: ";
    cin>> num;

    if(num >= 1 && num <= 10){
        sum += num;
    }else{
        cout<< "\nSOORY!!, Please enter number between 1 to 10 !!!";
        player2_tern();
    }
}

void checkWinner1(){
    
    if (sum == 100)
    {
        cout<< "\n Player1 WIN !!! \n" <<endl;
        exit(0);
    }else if(sum > 100){
        cout<< "\n DRAW !!! \n" <<endl;
        exit(0);
    }
    
}

void checkWinner2(){

    if (sum == 100)
    {
        cout<< "\n Player2 WIN !!! \n" <<endl;
        exit(0);
    }else if(sum > 100){
        cout<< "\n DRAW !!! \n" <<endl;
        exit(0);
    }
    
}


int main()
{
    while (true)
    {
        player1_tern();
        cout<< "Sum= " << sum <<endl;
        checkWinner1();
        player2_tern();
        cout<< "Sum= " << sum <<endl;
        checkWinner2();

    }
    


    return 0;
}