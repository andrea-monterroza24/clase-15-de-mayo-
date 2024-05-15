#include <iostream>
using namespace std;
int main (){


float angulo = 0.00;

cout << "Ingrese el angulo: "; cin >> angulo; 

if ( angulo < 90 ){

    cout << "El angulo es agudo.\n";
}

else if ( angulo == 90){

    cout << " El angulo es recto.\n";
}

else if ( angulo > 90 ){

    cout << "EL angulo es obtuso.\n";
}

    return 0;
}