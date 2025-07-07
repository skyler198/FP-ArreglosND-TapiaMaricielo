#include <iostream>
using namespace std;

int main() {
    int A[3][3];
    int B[3][3];
    int R[3][3] = {0};

    cout << "Ingrese los valores de la matriz A de 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "A posicion [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\nIngrese los valores de la matriz B de 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "B posicicon [" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
    return 0;
}