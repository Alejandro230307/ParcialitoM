#include <iostream>
using namespace std;
int main (void){
    int n;
    cout <<"Ingrese el valor del cual deseas conocer su tabla de multiplicar \n";
    cin >> n;
    cout <<"Su tabla de multiplicacion del 1 al 10 es: \n";
    for (int i = 0; i <= 10; i++)
    {
        cout << "El resultado de " << n << " x " << i <<" es: " << n * i <<"\n";
    }
    
    return 0;
}