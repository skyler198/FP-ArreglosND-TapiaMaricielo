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
    
    //multiplicacion
    for (int i = 0; i < 3; i++) {
	    for (int j = 0; j < 3; j++) {
	        for (int k = 0; k < 3; k++) {
	            R[i][j] += A[i][k] * B[k][j];
	        }
	    }
	}

    // Mostrar resultado en horizontal
    cout << "\nMatriz A:      Matriz B:      Resultado:\n";
    for (int i = 0; i < 3; i++) {
        // Matriz A
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        
        if (i == 1) {
        cout << "     x    ";
	    } else {
	        cout << "          ";
	    }

        // Matriz B
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << " ";
        }
        
	    if (i == 1) {
	        cout << "    =    ";
	    } else {
	        cout << "         ";
	    }

        // Resultado
        for (int j = 0; j < 3; j++) {
            cout << R[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}