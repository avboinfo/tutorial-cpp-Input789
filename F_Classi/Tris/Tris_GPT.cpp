#include <iostream>
#include <vector>
using namespace std;

class Tris {
private:
    vector<vector<char>> board;
    char currentPlayer;
public:
    Tris() {
        // Inizializza la scacchiera con spazi vuoti
        board = vector<vector<char>>(3, vector<char>(3, ' '));
        currentPlayer = 'X'; // Il giocatore X inizia per primo
    }

    void printBoard() {
        // Stampa la scacchiera
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j];
                if (j < 2) cout << "|";
            }
            cout << endl;
            if (i < 2) cout << "-----" << endl;
        }
    }

    bool makeMove(int row, int col) {
        // Effettua una mossa per il giocatore corrente
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            cout << "Mossa non valida. Riprova." << endl;
            return false;
        }
        board[row][col] = currentPlayer;
        return true;
    }

    bool checkWin() {
        // Controlla se c'è una vittoria
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2]) return true; // Controllo righe
            if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i]) return true; // Controllo colonne
        }
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) return true; // Controllo diagonale principale
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) return true; // Controllo diagonale secondaria
        return false;
    }

    bool checkDraw() {
        // Controlla se la partita è finita in parità
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ') return false; // C'è ancora almeno una casella vuota
            }
        }
        return true;
    }

    void switchPlayer() {
        // Cambia il giocatore corrente
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    char getCurrentPlayer() {
        // Restituisce il giocatore corrente
        return currentPlayer;
    }
};

int main() {
    Tris game;
    int row, col;

    cout << "Benvenuto nel gioco del tris!" << endl;

    while (true) {
        cout << endl << "E' il turno del giocatore " << game.getCurrentPlayer() << endl;
        game.printBoard();
        cout << "Inserisci la tua mossa (riga colonna): ";
        cin >> row >> col;

        if (game.makeMove(row, col)) {
            if (game.checkWin()) {
                cout << "Il giocatore " << game.getCurrentPlayer() << " ha vinto!" << endl;
                break;
            } else if (game.checkDraw()) {
                cout << "La partita è finita in parità!" << endl;
                break;
            } else {
                game.switchPlayer();
            }
        }
    }

    return 0;
}
