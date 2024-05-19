#include <iostream> 
using namespace std;
int main (){

    int entrada, cantidad, total; 
    int costoentrada;
    int SOLGENERAL = 3;
    int SOLPREFERENTE = 5;
    int SOMBRA = 8;
    int TRIBUNA = 15;
    int PLATEA = 20;

cout << "Entradas al estadio:\n"; 
cout << "1. SOL GENERAL $3 \n 2. SOL PREFERENTE $5\n 3. SOMBRA $8\n 4. TRIBUNA $15\n 5. PLATEA $20\n ";
cout << "Seleccione el numero del sector: "; cin >> entrada;
cout << "Ingrese la cantidad de entradas:  "; cin >> cantidad; 

switch (entrada){

    case 1: 
    costoentrada = SOLGENERAL;
    break;

    case 2:
    costoentrada = SOLPREFERENTE;
    break;

    case 3:
    costoentrada = SOMBRA;
    break;

    case 4: 
    costoentrada = TRIBUNA;
    break;

    case 5:
    costoentrada = PLATEA;
    break; 

    default: 
    cout << "La opcion no es valida" << endl;

}
 total = costoentrada * cantidad; 

 cout << "Su total a cancelar es : " << total << endl; 

    return 0;
}