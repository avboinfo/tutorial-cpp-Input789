/*
** BattleField.cpp una classe che gestisce una matrice quadrata come campo di battaglia
** Sandro Gallo - 20/04/2024
*/

#include <iostream>
using namespace std;

// DIM, SHIP, MISS, HIT, VOID
const int DIM = 6;
const char SHIP = 'X';
const char MISS = '.';
const char HIT = '*';
const char VOID = '-';

class BattleField {

  private:
    char m[DIM][DIM];

  public:
    BattleField() {
        for (int i=0; i<DIM; i++)
            for (int j=0; j<DIM; j++)
                m[i][j] = 97 + rand()%26;        
    }

    BattleField( char c ) {
        for (int i=0; i<DIM; i++)
            for (int j=0; j<DIM; j++)
                m[i][j] = c;
    }

    char get( int x, int y ) {
        return m[x][y];
    }

    void put( int x, int y, char c ) {
        m[x][y] = c;
    }

    void stampa() {
        int n = 1;
        cout << endl << " ------------------------------------------------------ " << endl;
        cout<<"0123456"<<endl;
        for (int i=0; i<DIM; i++) {
            cout<<n;
            n++;
            for (int j=0; j<DIM; j++) {
                cout<<m[i][j];
            }
            cout << endl;
        }
        cout << endl << " ------------------------------------------------------ " << endl;
    }

    void bomb() {
        int x = rand() % DIM;
        int y = rand() % DIM;
        m[x][y] = '*';
    }

    void placeHorizontalShip(int len) {
        if (len<=0 || len>=DIM) return;
        int x = rand() % (DIM);
        int y = rand() % (DIM-len);
        for (int i=0; i<len; i++) m[x][y+i] = SHIP;
    }

    void placeVerticalShip(int len) {
        if (len<=0 || len>=DIM) return;
        int x = rand() % (DIM-len);
        int y = rand() % (DIM);
        for (int i=0; i<len; i++) m[x+i][y] = SHIP;
    }

};