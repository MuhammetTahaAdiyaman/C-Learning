#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//fakt�riyel program�n� 3 d�ng� ile yazma �renkleri.
int main(int argc, char** argv) {

/*	(while d�ng�s� kullanarak fakt�riyel program�.9
int sayi;
int sonuc = 1;(sonucumuzu 1 e e�itledik ��nk� a�a��da sonu�*sayi i�elminde 0 olursa t�m sonu�lar 0 olurdu)

cout << "Lutfen bir sayi giriniz: " << endl;
cin >> sayi;

while(sayi>0){
	cout << sayi << endl;
	sonuc = sonuc*sayi;(buda fakt�riyel olmas�n� sa�layan de�i�ken)
	sayi--;(sayinin bir azaltma i�lemidir �ok �nemli bir �ey unutma)
}
	cout << "Sonuc: " << sonuc << endl;
*/	

/*	(do-while d�ng�s� kullanarak fakt�riyel program�.)
int sayi;
int sonuc = 1;

cout << "Lutfen bir sayi giriniz: " ;
cin >>sayi;

do{
	cout << sayi << endl;
	sonuc = sonuc*sayi;
	sayi--;
}while(sayi>0);

cout << "Sonuc: " << sonuc << endl;	
	
*/	

/* (for d�ng�s� kullanarak fakt�riyel program�)

int sayi;
int sonuc = 1;

cout << "Lutfen bir sayi giriniz: " ;
cin >> sayi;

for(sayi; sayi>0; sayi--){ //burada sayiya ilk ba�ta bir de�er atamamam�z�n sebebi yukar�da kullan�c�ya de�er girdirece�imizden dolay�.
	cout << sayi << endl;
	sonuc = sonuc*sayi;
}	
	cout << "Sonuc: " << sonuc << endl;
	
*/	

// bu �rnekler 3 d�ng� ile ayn� program nas�l yap�l�r �eklindedir lakin sonucu hep = 1 yapt�k ��nk� sonuc e�er 1 olmazsa �arp�m s�ras�nda her zaman 0 ile say�
//�arp�lm�� olacakt� ve sonuc her zaman 0 ��kacakt�.	
	
	
	return 0;
}
