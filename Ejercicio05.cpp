#include <iostream>
using namespace std;

int main() {
	int matriz[4][4];
	cout << "Ingrese el valores para la matriz: "<< endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << "Posicion [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
	system("pause");
	system("cls");
    
    cout << "   ---- Matriz: ----" << endl;
    for(int i = 0; i < 4; i++){
    	cout << "        ";
    	for(int j = 0; j < 4; j++){
    		cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	int maximo = matriz[0][0], minimo = matriz[0][0];
    int filaMax, colMax, filaMin, colMin;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
                filaMax = i;
                colMax = j;
            }
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
                filaMin = i;
                colMin = j;
            }
        }
    }

    cout << "Maximo valor: " << maximo << " en Fila " << filaMax << ", Columna " << colMax << endl;
    cout << "Minimo valor: " << minimo << " en Fila " << filaMin << ", Columna " << colMin << endl;

    return 0;
}
