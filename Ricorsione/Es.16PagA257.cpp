/*Es. 16 pag. A257
GALDINI MATTEO 3CIN*/


#include <iostream>

using namespace std;



const int N = 5;
int checkMax(int n, int array[N], int max, int i){
    if (n == 0){
        return max;
    }
    else{
        if (max <= array[i]){
            max = array[i];
        }
        n--;
        i++;
        return checkMax(n, array, max, i);
    }
}





int checkMin(int n, int array[N], int min, int i){
    if (n == 0){
        return min;
    }
    else{
        if (min >= array[i]){
            min = array[i];
        }
        n--;
        i++;
        return checkMin(n, array, min, i);
    }
}

int main(){
    int i = 0;
    int n = N;
    int max = 0;
    int min = 100;
    int array[N];
    cout<<"Insert five numbers please: "<<endl;
    for (int j = 0; j<N; j++){
        cout<<j + 1<<": ";
        cin>>array[j];
    }
    max = checkMax(n, array, max, i);
    cout<<max<<endl;
    min = checkMin(n, array, min, i);
    cout<<min<<endl;
}