#include <iostream> 
using namespace std;
int main (){

    int edad = 1; 

    cout << "Ingrese su edad: \n"; cin >> edad; 

    if (edad <= 0 ){
         cout << "La edad ingresada no es valida. \n";
    }

    else if (edad < 18  ){
         cout << "Usted no es mayor de edad. \n";
    }

    else if (edad >=18){

        cout << "Usted es mayor de edad. \n";
    }
    

    return 0;
}