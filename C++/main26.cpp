#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//void fonksiyonu;

void dizininElamanlariniBastir(int sayidizisi[], int boyut)
{
	for(int i=0; i<boyut; i++){
		cout << sayidizisi[i] << " ";
	}
}


int main(int argc, char** argv) {
//biz �nceden say� dizisinin elemanlar�n� �u �ekilde bast�r�rd�k;-

int sayilar[3] = {1,2,3};
int sayilar2[4] = {1,2,4,6};
int sayilar3[5] = {1,3,5,9,12};


//art�k biz bir fonk ��rendik void;
//1- �imdi int main �st�ne bu fonksiyonu olu�tural�m	
	//dizininElamanlariniBastir(int sayidizisi[], int boyut)
 	dizininElamanlariniBastir(sayilar,3);//parantez i�indeki ifadenin ilk yerine t�r�, ikinci yerine ise t�r�n sahip oldu�u boyutu yaz�yoruz bu say�[3] bas�m�d�r.
	cout << endl;
	dizininElamanlariniBastir(sayilar2,4);
	cout << endl;
	dizininElamanlariniBastir(sayilar3,5);	
	
	
	
	//bu �ekilde bast�rabiliriz.
	
	
	
	
	
	
	
	
	return 0;
}
