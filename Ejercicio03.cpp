#include<iostream>
using namespace std;
int main (){
	int matriz[4][4];
	cout << "Ingrese el valores parala matriz: "<< endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << "Posicion [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
	system("pause");
	system("cls");

	int DP = 0;
	int DS = 0;
	
	cout << "\n----- matriz: -----\n" << endl;
	for (int i = 0; i < 4; i++){
		cout << "      ";
		for (int j = 0; j < 4; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "\nSuma de la dos diagonales:" << endl;
	
	for (int i = 0; i < 4; i++){
		DP = DP + matriz[i][i];
		DS = DS + matriz[i][3 - i];
	}
	cout << endl;
	cout << DP <<" + " << DS << " = " << DP + DS << endl;
	
	return 0;
}