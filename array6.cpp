#include <iostream>
using namespace std; 
int main (void)
{
    #include <iostream>
using namespace std;

int main() {
    int N;

    cout << "¿Cuántos números deseas ingresar? ";
    cin >> N;

    int numeros[N];

    // Ingreso de elementos
    for (int i = 0; i < N; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Guardamos el último valor temporalmente
    int ultimo = numeros[N - 1];

    // Desplazamos todos los elementos hacia la derecha
    for (int i = N - 1; i > 0; i--) {
        numeros[i] = numeros[i - 1];
    }

    // El último elemento pasa al inicio
    numeros[0] = ultimo;

    // Mostrar el arreglo después del desplazamiento
    cout << "\nArreglo después de desplazar a la derecha:\n";
    for (int i = 0; i < N; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}


    return 0;
}