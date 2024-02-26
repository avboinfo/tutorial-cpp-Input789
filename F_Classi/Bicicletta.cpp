/*
** Bicicletta.cpp
*/

#include <iostream>
using namespace std;

class Bicicletta {
  public:
    int raggio;
    string colore;
    Bicicletta( int r, string c ) {
        raggio=r;
        colore=c;
    }
    Bicicletta() {
        raggio=12;
        colore="colore";
    }
    void presentati() {
        cout << "Buongiorno, sono una bici di colore " << colore << " e con le ruote " << raggio << "!" << endl;
    }
};

int main()
{
    Bicicletta x(16,"verdino");
    Bicicletta y;

    x.presentati();
    y.presentati();

    return 0;
}
