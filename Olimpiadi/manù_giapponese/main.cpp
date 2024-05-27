// NOTE: it is recommended to use this even if you don't understand the
// following code.

#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// input data
int N;
int B;

int main() {
    //  uncomment the following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    cin>>N;
    cin>>B;
    vector <int> A(N);
    for (int i = 0; i<N; i++){
        cin>>A[i];
        if (A[i] > B) A[i] = 0;
    }
    sort(A.begin(), A.end(), greater<int>());
    int max = 0;
    bool good = false;
    /*while (!good){
        for (int i = 0; i<N; i++){
            if (A[i] > max) max = A[i];
        }
        if (max <= B) good = true;
        
    }*/
    for (int i = 1; i<N; i++){
        if ((A[0] + A[i]) <= B ){
            cout<<A[0]<<endl<<A[i]<<endl;
            i = N;
        }
    }
    return 0;
}