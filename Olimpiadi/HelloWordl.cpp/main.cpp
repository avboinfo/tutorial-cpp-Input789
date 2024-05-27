#include <fstream>
#include <iostream>
#include <string>
#include <vector>


using namespace std;


string S;
int N;

int main(){
    ifstream cin ("esempio0.txt");
    ofstream cout ("output.cpp");

    cin>>S;

    N = S.size();

    char c;
    long long int Cont = 0;

    for (int i = 0; i<N; i++){
        if (S[i] == 'h' && S[i + 1] == 'e' && S[i + 2] == 'l' && S[i + 3] == 'l' && S[i + 4] == 'o'){
            for (int j = i; j<N; j++){
                if (S[j] == 'w' && S[j + 1] == 'o' && S[j + 2] == 'r' && S[j + 3] == 'l' && S[j+4]== 'd'){
                    Cont ++;
                }
            }

        }
    }
    cout<<Cont;
}