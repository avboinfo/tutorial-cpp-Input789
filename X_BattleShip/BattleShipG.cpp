/*BattleShipG.cpp
GALDINI MATTEO 3CIN
*/

#include <iostream>

#include "BattleField.cpp"

using namespace std;


class BattleShipG{
    private:

    BattleField campo;
    BattleField mappa;

    public:
    BattleShipG(){
        mappa = BattleField( NOTHING );
        campo = BattleField( NOTHING );
        campo.placeHorizontalShip(3);
        campo.placeVerticalShip(4);
        campo.placeVerticalShip(2);
        campo.placeHorizontalShip(5);
    }

    void game(){
        // lancia 20 bombe a caso
        for (int i=0; i<20; i++) {
            int x = rand() % DIM;
            int y = rand() % DIM;
            if (campo.get(x,y) == S) continue; //Controlla che non si ripetano le bombe
            if (campo.get(x,y)==SHIP){
                mappa.put(x,y,S);
                campo.put(x,y,S);
            }
            else mappa.put (x,y, NOTS); //La bomba non ha colpito nulla
        }

    

        mappa.stampa();

        

        campo.stampa(); //Stampa il campo risolto

        Input();


    }


    void Input(){
        int x, y;
        cout<<"Insert the x and the y";
        cin>>x;
        cin>>y;
        while ((x>10) || (y>10)){
            if (x>10){
                cin>>x;
            }
            if (y>10){
                cin>>y;
            }
        }
        if (campo.get(x,y)==SHIP){
            mappa.put(x,y,S);
            campo.put(x,y,S);
        }

    }

};