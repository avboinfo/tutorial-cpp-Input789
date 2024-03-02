/* Mastermind with CPP
Galdini Matteo 02/03/2024*/


 #include <iostream>

 #include "mastermind.cpp" 


 using namespace std;


 int main(){

    mastermind first = mastermind();
    //mastermind start = mastermind();

    //start.startGame();

    first.newShot();
    first.moveResult();



    return 0;
 }