#include <iostream>
using namespace std;
int main (void){
    int n;
    int suma = 0;
    cout <<"Digite la cantidad de elementos que deseas sumar: \n";
    cin >> n;
    int numeros[n];
    for (int i = 0; i < n; i++)
    {
        cout <<"Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }
    cout <<" La suma de los " << n << " es: " << suma <<"\n";
    
    
    return 0;
}