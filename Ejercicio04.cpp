#include <iostream>
using namespace std;

int main() {
    int matriz[4][4] = {
    	
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 4, 3, 2},
        {3, 1, 5, 6}
    };
    cout << "==============================================" << endl;
    cout << "               INTERCAMBIAR FILAS" << endl,
    cout << "==============================================\n" << endl;
    
    cout << "   ----- Matriz: -----\n" << endl;
    for (int i = 0; i < 4; i++){
		cout << "         ";
		for (int j = 0; j < 4; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}

   int fila1, fila2;

	do {
	    cout << "\nIngrese la primera fila a intercambiar (0-3): ";
	    cin >> fila1;
	
	    if (fila1 < 0 || fila1 > 3) {
	        cout << "Respuesta invalida, ingrese un numero entre 0 y 3." << endl;
	    }
	
	} while (fila1 < 0 || fila1 > 3);
	
	do {
	    cout << "Ingrese la segunda fila a intercambiar (0-3): ";
	    cin >> fila2;
	
	    if (fila2 < 0 || fila2 > 3) {
	        cout << "Respuesta invalida, ingrese un numero entre 0 y 3." << endl;
	    }
	
	} while (fila2 < 0 || fila2 > 3);

    
	int temp = 0;
    for (int j = 0; j < 4; j++) {
        temp = matriz[fila1][j];
        matriz[fila1][j] = matriz[fila2][j];
        matriz[fila2][j] = temp;
    }

    cout << "\n    --- Matriz final: ---\n" << endl;
    for (int i = 0; i < 4; i++){
    	cout << "          ";
        for (int j = 0; j < 4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
