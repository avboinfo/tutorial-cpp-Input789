#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main() {
    char ciao = 'c';
    char *frocio = 'f';
    char result[50];
    strcat(result, ciao);
    strcat(result, frocio);
    cout<<result;
}
 