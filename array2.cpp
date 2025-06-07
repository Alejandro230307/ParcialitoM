#include <iostream>
using namespace std;
int main (void){
    int n;
    cout <<"Ingresa la cantidad de digitos que deseas comparar: \n";
    cin >> n;
    int numero[n];

    for (int i = 0; i < n; i++)
    {
        cout <<"Ingresa el numero " << i + 1 << " :\n";
        cin >> numero[i];
    }
    int mayor = numero[0];
    int menor = numero[0];
    for (int i = 1; i < n; i++)
    {
        if ( numero[i] > mayor)
        {
            mayor = numero[i];
        }
        if ( numero[i] < menor)
        {
            menor = numero[i];
        }
        
    }
    cout <<"El numero mayor es: " << mayor <<". \n";
    cout <<"El numero menor es: " << menor <<". \n";
    
    

    return 0;
}