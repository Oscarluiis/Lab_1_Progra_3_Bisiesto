#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

    //Ingresar año
    int year = 0;

    cout << "Ingrese año :";
    cin >> year;
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))){
        cout << "¡Es!";


    } else{
        cout<<"No es";
    }
return 0;
}