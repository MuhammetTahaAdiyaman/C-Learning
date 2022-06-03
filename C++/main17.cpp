#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//faktöriyel programýný 3 döngü ile yazma örenkleri.
int main(int argc, char** argv) {

/*	(while döngüsü kullanarak faktöriyel programý.9
int sayi;
int sonuc = 1;(sonucumuzu 1 e eþitledik çünkü aþaðýda sonuç*sayi iþelminde 0 olursa tüm sonuçlar 0 olurdu)

cout << "Lutfen bir sayi giriniz: " << endl;
cin >> sayi;

while(sayi>0){
	cout << sayi << endl;
	sonuc = sonuc*sayi;(buda faktöriyel olmasýný saðlayan deðiþken)
	sayi--;(sayinin bir azaltma iþlemidir çok önemli bir þey unutma)
}
	cout << "Sonuc: " << sonuc << endl;
*/	

/*	(do-while döngüsü kullanarak faktöriyel programý.)
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

/* (for döngüsü kullanarak faktöriyel programý)

int sayi;
int sonuc = 1;

cout << "Lutfen bir sayi giriniz: " ;
cin >> sayi;

for(sayi; sayi>0; sayi--){ //burada sayiya ilk baþta bir deðer atamamamýzýn sebebi yukarýda kullanýcýya deðer girdireceðimizden dolayý.
	cout << sayi << endl;
	sonuc = sonuc*sayi;
}	
	cout << "Sonuc: " << sonuc << endl;
	
*/	

// bu örnekler 3 döngü ile ayný program nasýl yapýlýr þeklindedir lakin sonucu hep = 1 yaptýk çünkü sonuc eðer 1 olmazsa çarpým sýrasýnda her zaman 0 ile sayý
//çarpýlmýþ olacaktý ve sonuc her zaman 0 çýkacaktý.	
	
	
	return 0;
}
