//Llena un arreglo con N números y cuenta cuántos son pares y cuántos son impares.//
#include <iostream>
using namespace std; 
int main (void){
    int n;
    cout <<"Cuantos numeros deseas conocer si son pares o impares \n";
    cin >> n;
    int numero[n];
    for (int i = 0; i < n; i++)
    {
        cout <<"Numero " << i + 1 << ": ";
        cin >> numero[i];
    }
    int pares = 0;
    int impares = 0;
    for (int i = 1; i < n; i++)
    {
        if ( numero[i] % 2 == 0)
        {
            pares++;
        }
        else 
        {
            impares++;
        }
    }
    cout << "De los numeros que usted ingreso tiene un total de: \n";
    cout << "Numeros pares: " << pares <<"\n";
    cout << "Numeros pares: " << impares <<"\n";

    return 0;
}