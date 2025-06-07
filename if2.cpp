#include <iostream>
usign namespace std;
int main (void){
    int n1, n2;
    cout <<"Ingrese el primer valor que deseas comparar: \n";
    cin >> n1;
    cout <<"Ingrese el segundo valor que deseas comparar: \n";
    cin >> n2;
    if (n1 <= 100 && n2 < n1)
    {
        cout <<"Su primer valor ingresado " << n1 << " Es mas cercano que su segundo valor ingresado \n";
    }
    else if (n1 >= 100 && n2 > n1)
    {
        cout <<"Su primer valor ingresado " << n1 << " Es mas cercano que su segundo valor ingresado \n";
    }
    else if (n2 >= 100 && n1 > n2)
    {
        cout <<"Su primer valor ingresado " << n2 << " Es mas cercano que su segundo valor ingresado \n";
    }
    else 
    {
        cout <<"Su primer valor ingresado " << n2 << " Es mas cercano que su segundo valor ingresado \n";
    }
    
    return 0;
}