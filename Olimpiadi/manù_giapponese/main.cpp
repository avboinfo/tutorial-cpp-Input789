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
    vector <int> C(N);
    for (int i = 0; i<N; i++){
        cin>>A[i];
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
    int s = 0;
    int result1, result2 = 0;
    for (int i = 0; i<N; i++){
        for (int j = i + 1; j<N; j++){
            if (s <A[i] + A[j] && A[i] + A[j] <= B){
                s = A[i] + A[j];
                result1 = i;
                result2 = j;
            }
        }
    }
    cout<<A[result1]<<endl<<A[result2]<<endl;
    return 0;
}