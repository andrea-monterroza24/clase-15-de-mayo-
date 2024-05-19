#include <iostream>
using namespace std;
int main(){

    int  tipomotor;

    cout << "Tipos de motor : "; 
    cout << "Seleccione un numero del 1 al 4 para ver el tipo de bomba "; cin >> tipomotor;

    switch (tipomotor){

        case 0:
        cout << "No esta establecido un valor definido para el tipo de bomba" <<endl;
        break;

        case 1:
        cout << "La bomba es una bomba de agua" << endl;
        break;

        case 2:
        cout << "La bomba es una bomba de gasolina" << endl;
        break; 

        case 3:
        cout << "La bomba es una bomba de hormigon" << endl;
        break;

        case 4: 
        cout << " La bomba es una bomba de pasta alimenticia" << endl; 
        break;

        default:
        cout << "No existe un valor valido para el tipo de bomba" << endl;

    }

    return 0;
}