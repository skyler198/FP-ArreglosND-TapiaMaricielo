#include<iostream>

using namespace std;
int main(){
	int matriz[6][6];

	cout << "==========================================================" << endl;
    cout << "                  Reflejar una Imagen " << endl;
    cout << "==========================================================\n" << endl;
    
    cout << "Ingrese los valores para la matriz 6x6:\n" << endl;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			cout << "Posicion: [" << i << "] [" << j << "] : ";
			cin >> matriz[i][j];
		}
	}
	system("pause");
	system("cls");
	
	cout << "\n----------Matriz actual:----------\n" << endl;
	
	for(int i = 0; i < 6; i++){
		cout << "         ";
		for(int j = 0; j < 6; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	
	cout << "\n---------Matriz reflejada:---------\n" << endl;
	
	int temp = 0;
	for(int i = 0; i < 6; i++){
	    for(int j = 0; j < 3; j++){ 
	        temp = matriz[i][j];
	        matriz[i][j] = matriz[i][5 - j];
	        matriz[i][5 - j] = temp;
	    }
	}
	
	for(int i = 0; i < 6; i++) {
		cout << "         ";
	    for(int j = 0; j < 6; j++) {
	        cout << matriz[i][j] << " ";
	    }
    	cout << endl;
	}
	
	return 0;
}