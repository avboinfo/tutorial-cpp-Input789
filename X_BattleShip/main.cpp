/*
** main.cpp - il programma che gioca a Battaglia Navale
** Sandro Gallo - 20/04/2024
*/

#include <iostream>
#include "BattleShip.cpp"
using namespace std;

int main() {
    int mod;
    cout<<"Digita 1 per la modalità facile, 2 per la media e 3 per la difficile"<<endl;
    cin>>mod;
    while (mod>3) cin>>mod;
    BattleShip gioco = BattleShip(mod);
    cout<<"* --> nave colpita, . --> nave non colpita, X --> nave (visibile solo se si perde)"<<endl;
    gioco.play();
    int win = gioco.win();
    if (win == 1){
        cout<<"Hai vinto";
    }
    else{
        cout<<"Hai perso";
    }
    return 0;
}