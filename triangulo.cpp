#include <iostream>
using namespace std;
int main (){


    float angulo1 = 0.00, angulo2= 0.00;
    float respuesta = 0.00;

    cout << "Programa para calcular el tercer angulo de un triangulo\n";
    cout <<" Ingrese el primer angulo: \n"; cin >> angulo1;
    cout << "Ingrese el segundo angulo: \n"; cin >> angulo2;

    if((angulo1 <0 || angulo2 <0)|| (angulo1>180 || angulo2>180))
    {

        cout <<" Uno de los valores ingresados no esta permitido \n";
    }

    else 
    {
         respuesta = 180 - angulo1 - angulo2;
         cout << "El valor del tercer angulo es : " << respuesta << "\n";
    }


    return 0;

}