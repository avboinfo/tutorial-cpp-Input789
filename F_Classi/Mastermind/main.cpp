/* Mastermind with CPP
Galdini Matteo 02/03/2024*/


 #include <iostream>

 #include "mastermind.cpp" 


 using namespace std;


 int main(){

    mastermind first = mastermind();
    int game = 0;
    //mastermind start = mastermind();

    //start.startGame();

    first.generateScheme();
    while (game != 9){
      first.newShot();
      first.moveResult();
      first.printScheme();
      int end = first.Continue();
      game == end;
    }

    first.checkLoss();


    return 0;
 }