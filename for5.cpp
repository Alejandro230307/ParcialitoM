#include <iostream>
using namespace std;
int main (void){
    int n;
    int suma = 0;
    cout <<"Ingrese el numero del cual desea conocer su sumatoria: \n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        suma += i;
        cout <<"La sumatoria de los digitos del numero " << n <<" es:" << suma <<"\n";
    }
    
    return 0;
}