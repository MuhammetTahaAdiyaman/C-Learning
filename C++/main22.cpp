#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//matris ��rene�i ile �ok boyutlu say� dize i�lemlerini g�rm�� olduk
int main(int argc, char** argv) {

/*	
	
	int matris[4][4]; //biz bu de�erleri ayr�ca yazmak istersek int matris[3][3] = {{1,2,3},{1,2,3},{1,2,3}} �eklinde tan�mlar�z.
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++)	{
			
			cin >> matris[i][j];
		}
	}
	
	for(int i=0; i<4; i++){ // bu d�ng�u� sat�r i�in yani ilk olan i de�eri = sat�r i�in
		for(int j=0; j<4; j++){ // bu d�ng�y� ise s�tun i�in yani ikinci olan j de�eri = s�tun
			cout << matris[i][j] << " ";
		}
		cout <<endl; // bir bo�luk b�rakt�ktan sonra a�a�� inmesi i�in bu �ekilde yazd�m
	}

*/	
	//e�er iki matris toplam�n� isterse tabii ki matrisin s�tun ve sat�r say�lar� ayn� olmas� gerekmektedir.
	
	int matris1[2][2];
	int matris2[2][2];
	int matris3[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0; j<2; j++){
			cin >> matris1[i][j];
		}
	
	}
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cin >> matris2[i][j];
		}
		
	}
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
		matris3[i][j] = matris1[i][j] + matris2[i][j]; 
		}
		
	}
	
	cout << "Matrislerin toplam�" << endl;
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << matris3[i][j];
		}
	cout << endl;
	}
	
	return 0;
}
