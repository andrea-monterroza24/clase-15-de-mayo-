#include <iostream> 
using namespace std; 
int main (){

    float nota1, nota2, nota3, nota4, nota5, nota6, promedio;
    string nombre; 

    cout << "Ingrese su nombre: "; cin >> nombre;
    cout << "Ingrese la nota de Corto 1: "; cin >> nota1;
    cout << "Ingrese la nota de Corto 2: "; cin >> nota2;
    cout << "Ingrese la nota de Parcial 1: "; cin >> nota3;
    cout << "Ingrese la nota de Parcial 2: "; cin >> nota4;
    cout << "Ingrese la nota de Laboratorio: "; cin >> nota5;
    cout << "Ingrese la nota de Proyecto : "; cin >> nota6;

    promedio = (nota1 * 0.10) + (nota2 * 0.10) + (nota3 * 0.15) + (nota4 * 0.20) + (nota5 * 0.20) + (nota6 * 0.25);

    if (promedio >= 6.0){

        cout << "Felicidades usted ha pasado la materia" << endl;

    } 
    
    else {

        cout << "Usted no paso la materia" << endl; 
    }

    cout << nombre << ", su promedio final es de: "<< promedio << "." << endl;
 
    return 0;
}