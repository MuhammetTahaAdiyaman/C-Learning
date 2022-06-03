#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//yap� i�inde yap� 
//market �r�nlerini reyonlar �eklinde olu�tural�m with struct

//KURU GIDA = makarna-baklagil
//KOZMET�K = parfum-makyaj
//KASAP = tavuk-dana
//MAMAV= sebze-meyve
struct kategori{
	string isim;
	int urunAdeti;
};

struct reyonlar{
	string isim;
	bool acikmi; 
	int urunsayisi;
	kategori *kategoriOzellikleri;//yukar�daki yap�y� bu yap�n�n i�inde kullan�yoruz.
};
//e�er biz bu kategoriyi pointers yani adres �eklinde almak isteseydik nas�l yapacakt�k ? 



int main(int argc, char** argv) {
	
	reyonlar r1; 
	//reyonlar r2 = {"kasap", 1, 300 {"tavuk",150}};//alttakini uygulad���m�zda hatay� almam�z�n sebebi biz kategoriyi pointer ile kullanaca��m�z i�in degerleri bu �ekilde atayamay�z.
	//r1 i ve r2 yi de bast�ral�m r1 e atama yapmad�k bakal�m ne basacak
	reyonlar r2;
	r2.isim = "Kasap";
	r2.acikmi = true;
	r2.urunsayisi = 300;
	//r2.kategoriOzellikleri//i�te tam bu noktada i�ler biraz farkl�la��yor ��nk� biz bunu pointer olarak alm��t�k o zaman.
	//kategori ad�nda yeni bir nesne �a��r�m i�lemi olu�turaca��z ayn� yukar�da reyonlar r1 gibi
	kategori a = {"tavuk",150};
	//ayr�ca bu �eilde olu�turaca��z.
	//�imdi biz bu a y� r2.kategoriOzelliklerine i�aretliyece�iz ama a y� adres �eklinde alaca��z ��nk� kategoriyi biz yukar�da pointers �eklinde alm��t�k
	r2.kategoriOzellikleri = &a;
	//art�k bunlar� bast�r�rken de �u �ekilde yapaca��z
	r1=r2;
	cout << r1.isim << endl;
	cout << r2.kategoriOzellikleri->isim <<" "<< r2.kategoriOzellikleri->urunAdeti<< endl;
	//�imdi bu da hata verdi ��nk� biz r2.kategoriOzellikleri.isim yazd�k pointer ile tutt�u i�in -> bu �ekilde yazaca��z.
	
	return 0;
}
