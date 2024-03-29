/* Es. 14 pag. A257
GALDINI MATTEO*/


#include <iostream>

using namespace std;


int stringCheck(string s, char c, int Cont, int i){
    if (s[i] == '\0'){
        return Cont;
    }
    else{
        if (s[i] == c){
            Cont++;
        }
        i++;
        return stringCheck(s, c, Cont, i);
    }

}

int main(){

    string s;
    char c;
    int i = 0;
    int Cont = 0;

    cout<<"Insert a string: ";
    cin>>s;

    cout<<"Insert a char (c) in order to know how many times it appears in the string: ";
    cin>>c;

    Cont = stringCheck(s, c, Cont, i);
    cout<<Cont;
    
    return 0;
}

