/*
** BattleShip.cpp una classe per giocare alla Battaglia Navale
** Sandro Gallo - 20/04/2024
*/

#include <iostream>
#include "BattleField.cpp"

using namespace std;

// DIM, SHIP, MISS, HIT, VOID

class BattleShip {

    private:

    BattleField mappa;
    BattleField campo;
    int e = 20;
    int n = 0;

    public:
    BattleShip(int mod) {
        mappa = BattleField(VOID);
        campo = BattleField(VOID);
        if (mod == 1){
            campo.placeHorizontalShip(3);
            campo.placeVerticalShip(4);
            campo.placeVerticalShip(2);
            campo.placeHorizontalShip(5);
        }
        if (mod == 2){
            campo.placeHorizontalShip(3);
            campo.placeVerticalShip(4);
        }
        if (mod == 3){
            campo.placeHorizontalShip(3);
        }
    }

    void play() {
        while ( ! gameOver() ) {
            e--;
            cout<<"Tentativi rimasti: "<<e<<endl;
            if (e == 0){
                n = 1;
                win();
                break;
            }
            mappa.stampa();
            if (!playHand()) break;
        }
        campo.stampa();
    }

    bool playHand() {
        cout<<"Inserisci la coordinata x: ";
        int x;
        int y;
        cin >> x; if (x<=0 || x>DIM) return false; else x--;
        cout<<"Inserisci la coordinata y: ";
        cin >> y; if (y<=0 || y>DIM) return false; else y--;
        if (campo.get(x,y)==SHIP) {
            mappa.put(x,y,HIT);
            campo.put(x,y,HIT);
        } else mappa.put(x,y,MISS);
        return true;
    }

    int win(){
        int win;
        if (n == 10) win = 1;
        if (n == 1) win = 0;
        return win;
    }

    bool gameOver() {
        for (int i=0; i<DIM; i++) {
            for (int j=0; j<DIM; j++){
                if (campo.get(i,j)==SHIP){
                    return false;
                }
            }
        }
        n = 10;
        win();
        win();
    }

};