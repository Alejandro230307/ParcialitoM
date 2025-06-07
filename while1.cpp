#include <iostream>
using namespace std;
int main (void){
    int suma = 0;
    int n;
    cout <<"Ingrese los digitos que desea sumar: (ingrese 0 cuando desea dejar de sumar) \n";
    do
    {
        cin >> n;
        suma += n;
    } while ( n != 0);

    cout <<"La sumatoria de todos sus digitos ingresados es: " << suma <<"\n";
    
    return 0;
}