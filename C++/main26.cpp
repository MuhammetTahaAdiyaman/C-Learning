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
//biz önceden sayý dizisinin elemanlarýný þu þekilde bastýrýrdýk;-

int sayilar[3] = {1,2,3};
int sayilar2[4] = {1,2,4,6};
int sayilar3[5] = {1,3,5,9,12};


//artýk biz bir fonk öðrendik void;
//1- þimdi int main üstüne bu fonksiyonu oluþturalým	
	//dizininElamanlariniBastir(int sayidizisi[], int boyut)
 	dizininElamanlariniBastir(sayilar,3);//parantez içindeki ifadenin ilk yerine türü, ikinci yerine ise türün sahip olduðu boyutu yazýyoruz bu sayý[3] basýmýdýr.
	cout << endl;
	dizininElamanlariniBastir(sayilar2,4);
	cout << endl;
	dizininElamanlariniBastir(sayilar3,5);	
	
	
	
	//bu þekilde bastýrabiliriz.
	
	
	
	
	
	
	
	
	return 0;
}
