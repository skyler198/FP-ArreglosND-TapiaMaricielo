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
    
    cout << "   ----- Matriz -----\n" << endl;
    for (int i = 0; i < 4; i++){
		cout << "         ";
		for (int j = 0; j < 4; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}

    int fila1, fila2;
    cout << "\nIngrese la primera fila a intercambiar (0-3): ";
    cin >> fila1;
    cout << "Ingrese la segunda fila a intercambiar (0-3): ";
    cin >> fila2;
    

    return 0;
}
