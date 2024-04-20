/* main.cpp
GALDINI MATTEO 3CIN
*/

#include <iostream>

#include "BattleShipG.cpp"

using namespace std;

int main(){
    cout<<"Battaglia navale";
    BattleShipG game = BattleShipG();
    game.game();
    cout<<"End";

}