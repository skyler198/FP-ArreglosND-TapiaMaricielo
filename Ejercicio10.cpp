#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int matrizMina[10][10];

    srand(time(0));

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            matrizMina[i][j] = rand() % 2;
        }
    }  
    
    for(int i = 0; i <10; i++){
    	cout << "       ";
    	for(int j = 0; j < 10; j++){
    		cout << matrizMina[i][j] << " ";
		}
		cout << endl;
	}
	
	//calcular cuantas minas hay cerca
	/*
	(i-1, j-1) (i-1, j) (i-1, j+1)
	(i  , j-1)   [x]    (i  , j+1)
	(i+1, j-1) (i+1, j) (i+1, j+1)
	*/
	
	int matrizCont[10][10];
	for(int i = 0; i < 10; i++){
		for(int j =0; j < 10; j++){
			int cont = 0;
		
			if(i - 1 >= 0 && j - 1 >= 0 && matrizMina[i - 1][j - 1] == 1){
				cont++;	
			}
			if (i + 1 < 10 && j - 1 >= 0 && matrizMina[i + 1][j - 1] == 1){
				cont++;
			}
			if(i - 1 >= 0 && j + 1 < 10 && matrizMina[i - 1][j + 1] == 1){
				cont++;
			}
			if (i + 1 < 10 && j + 1 < 10 && matrizMina[i + 1][j + 1] == 1){
				cont++;
			}
			if(i - 1 >= 0 && matrizMina[i - 1][j] == 1){
				cont++;
			}
			if (i + 1 < 10 && matrizMina[i + 1][j] == 1){
				cont++;
			}
			if(j - 1 >= 0 && matrizMina[i][j - 1] == 1){
				cont++;
			}
			if(j + 1 < 10 && matrizMina[i][j + 1] == 1){
				cont++;
			}
			
			matrizCont[i][j] = cont;		
		}
	}
	
	cout << "\nTablero\n" << endl;
	for(int i = 0; i < 10; i++){
		cout << "       ";
		for(int j = 0; j < 10; j++){
			cout << matrizCont[i][j] << " ";
		}
		cout << endl;
	}
	return 0;	
}