#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int bosqueInical[10][10];
	int BosquePropagacion[10][10];
	
	srand(time(0));
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			bosqueInical[i][j] = rand() % 2;
		}
	}
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			cout << bosqueInical[i][j]<<" "; 
		}
		cout << endl;
	}
	return 0;
}