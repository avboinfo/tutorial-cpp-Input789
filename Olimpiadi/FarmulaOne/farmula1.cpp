// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test) {
        int N;
        cin >> N;
        
        vector<int> P(N);
        for (int i = 0; i < N; ++i)
            cin >> P[i];
        
        string ans = "";

        int O[N];

        for (int i = 0; i<N; i++) O[i] = 1;

        for (int i = 0; i<N; i++){
            if (P[i] == 1) {
                P[i] = 25;
                O[i] = 2;
            } 
            else if (P[i] == 2) P[i] = 18;
            else if (P[i] == 3) P[i] = 15;
            else if (P[i] == 4) P[i] = 12;
            else if (P[i] == 5) P[i] = 10;
            else if (P[i] == 6) P[i] = 8;
            else if (P[i] == 7) P[i] = 6;
            else if (P[i] == 8) P[i] = 4;
            else if (P[i] == 9) P[i] = 2;
            else if (P[i] == 10) P[i] = 1; 
            else if (P[i] > 10) P[i] = 0;
        }

        for (int i = 0; i<N; i++){
            if (O[i] == 1) O[i] = 25;
            else if (O[i] == 2) O[i] = 18;
        }
        
        int points = 0;
        for (int i = 0; i<N; i++){
            points = points + P[i];
        }
        
        int points_2 = 0;
        for (int i = 0; i<N; i++){
            points_2 = points_2 + O[i];
        }

        int max = 25 * N;
        if (points_2 <= points) ans = "Champion";
        else if (points_2 > points) ans = "Practice harder";
        
        cout << ans << endl;
    }

    return 0;
}
