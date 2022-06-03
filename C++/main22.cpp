#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//matris öðreneði ile çok boyutlu sayý dize iþlemlerini görmüþ olduk
int main(int argc, char** argv) {

/*	
	
	int matris[4][4]; //biz bu deðerleri ayrýca yazmak istersek int matris[3][3] = {{1,2,3},{1,2,3},{1,2,3}} þeklinde tanýmlarýz.
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++)	{
			
			cin >> matris[i][j];
		}
	}
	
	for(int i=0; i<4; i++){ // bu döngüuü satýr için yani ilk olan i deðeri = satýr için
		for(int j=0; j<4; j++){ // bu döngüyü ise sütun için yani ikinci olan j deðeri = sütun
			cout << matris[i][j] << " ";
		}
		cout <<endl; // bir boþluk býraktýktan sonra aþaðý inmesi için bu þekilde yazdým
	}

*/	
	//eðer iki matris toplamýný isterse tabii ki matrisin sütun ve satýr sayýlarý ayný olmasý gerekmektedir.
	
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
	
	cout << "Matrislerin toplamý" << endl;
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << matris3[i][j];
		}
	cout << endl;
	}
	
	return 0;
}
