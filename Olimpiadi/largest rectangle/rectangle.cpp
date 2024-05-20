// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    ifstream cin("input2.txt");
    ofstream cout("output.txt");

    int N;
    cin >> N;
    int Cont = 0;
    int ok = 1;
    vector<long long> E(N);
    
    vector<long long> S(N);
    for (int i = 0; i < N; i++)
        cin >> S[i];
    
    long long A = 1;
    
    sort(S.begin(), S.end());
    for (int i = 0; i<N; i++){
        if (S[i] == S[i + 1]){
            E[i] = S[i];
        }
    }
    
    int equal = 1; 
    int max = E[0];
    for (int i = 0; i<N - 1; i++){
        if (S[i] != S[i + 1]) equal = 0;
    }
    if (equal == 1){
        A = S[0] * S[0];
        Cont = 2;
    }
    
    
    max = E[0];
    while (Cont < 2){
        for (int i = 0; i<N; i++){
            if (E[i] > max) max = E[i];
        }
        A = A*max;
        for (int i = 0; i<N; i++){
            if (E[i] == max) E[i] = 0;
        }
        Cont++;
        max = 0;


    }

    
    cout << A << endl;

    return 0;
}
