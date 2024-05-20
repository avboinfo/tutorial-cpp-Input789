// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#include <iostream>

int concatenate(const int vec[], int N) {
    int result = 0;
    
    for (int i = 0; i < N; ++i) {
        result = result * 10 + vec[i];
    }
    
    return result;
}


int main() {
    // uncomment the following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream comut("output.txt");

    int N;
    cin >> N;
    
    srand(time(NULL));
    
    int number[N];
    int number2 = 0;
    int R;
    int e;
    
    for (int i = 0; i<N; i++){
        for (int j = 0; j<pow(2, N); j++){  
            R = rand()%2 + 1; //Fino a due partendo da 0
            if (R == 2){
                R = 5;
            }
            number[i] = R;
        }
        number2 = concatenate(number, N);
        cout<<number2<<endl;
        if (number2 %3 == 0){
            e = number2;
            
        }
        for (int i = 0; i<N; i++){
            number[i] = 0;
        }
        
    }
    
    if (e == 0){
        e = -1;
    }

    cout<<e;
    
    

    return 0;
}
 

