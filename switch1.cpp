#include <iostream>
using namespace std;
int main (void){
    int opc;
    double n1, n2, resu;
    cout <<"Ingrese la opcion de la operacion que desea utilizar \n";
    cout <<"1-) Suma \n";
    cout <<"2-) Resta \n";
    cout <<"3-) Multiplicacion \n";
    cout <<"4-) Division \n";
    cin >> opc;
    switch (opc)
    {
    case 1:
        cout <<"Usted a elegido suma. Ingrese el primer valor que desea suma: \n";
        cin >> n1;
        cout <<"Usted a elegido suma. Ingrese el segundo valor que desea suma: \n";
        cin >> n2;
        cout << "El resultado de su suma es: " << n1 + n2 << ".\n";
        break;
    case 2:
        cout <<"Usted a elegido resta. Ingrese el primer valor que desea restar: \n";
        cin >> n1;
        cout <<"Usted a elegido resta. Ingrese el segundo valor que desea restar: \n";
        cin >> n2;
        cout << "El resultado de su suma es: " << n1 - n2 << ".\n";
        break;
    case 3:
        cout <<"Usted a elegido multiplicacion. Ingrese el primer valor que desea multiplicar: \n";
        cin >> n1;
        cout <<"Usted a elegido multiplicacion. Ingrese el segundo valor que desea multiplicar: \n";
        cin >> n2;
        cout << "El resultado de su suma es: " << n1 * n2 << ".\n";
        break;
    case 4:
        cout <<"Usted a elegido division. Ingrese el primer valor que desea dividir: \n";
        cin >> n1;
        cout <<"Usted a elegido division. Ingrese el segundo valor que desea dividir: \n";
        cin >> n2;
        cout << "El resultado de su suma es: " << n1 / n2 << ".\n";
        break;
    default:
        cout <<"Seleccione una opcion valida. \n";
        break;
    }
    return 0;
    
}