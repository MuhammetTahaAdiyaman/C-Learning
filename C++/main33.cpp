/*
1-)

#include <iostream>
using namespace std;
 run this program using the console pauser or add your own getch, system("pause") or input loop 
//biz a ve b say�lar�n� girdi�imiz a = 5 b = 8 olsun biz b= 5 a = 8 yapmak i�in �nceden �u �ekilde yapard�k.
int main(int argc, char** argv) {
	
	int sayi1, sayi2, temp;
	cout << "Lutfen iki deger giriniz: ";
	cin >> sayi1 >> sayi2;
	
	cout << "Sayi1 de�eri: " << sayi1 << endl << "Sayi2 degeri: " << sayi2 << endl;
	
	// �imdi ilk hallerini bast�rd�ktan sonra ikisinin yerini de��tirelim.
	temp = sayi1;
	sayi1 = sayi2;
	sayi2 = temp;
	
	cout << "Sayi1'in yeni degeri: " << sayi1 << endl << "Sayi2'nin yeni degeri: " << sayi2 << endl;

// biz bunu bu �ekilde yaparak degi�tirmi� olduk.
	
	return 0;
}
*/


//---------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
2-)

//�imdi biz pointer adresleme ile bunlar� nas�l yapoca��z ilk �nce pointer nedir ona bakal�m.
#include<iostream>
using namespace std;


int main(){
	
	
	int sayi1 = 10; //�imdi biz bunu ram da ge�ici olarak tutuyoruz bunun adresini tutmak i�in pointera ihtiyac�m�z vard�r.
	//ek madde olarak pointerde "* ve &" i�aretleri kullan�l�r.
	
	int *sayininAdresi = &sayi1;
	
// �imdi sayi1 in tutuldugu adresi ogrenmek i�in bir yazd�ral�m bakal�m.

	cout << sayininAdresi << endl; // bu adres bilgisayar�n i�in de bulunan ramda sayi1 in bulundugu yeri g�steririr.
	cout << *sayininAdresi << endl; //pointer(*) ile kullan�p bast�g�m�zda ise bize diyor ki sayinin bulundugu adrese git ve i�inde bulunan say�y� cout ile bas.
	// k�sacas� adresleme i�lemi b�yle oluyor.  
	
	
	
	return 0;
}
*/

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
3-)

// �imdi biz bu 1. �rnekte say�lar aras�nda de�i�im �rne�ini fonksiyon ile yapmaya �al��al�m nas�l olacak ?
#include<iostream>
using namespace std;

void degerleriDegistir(int sayi1, int sayi2)
{
	int temp;
	temp = sayi1;		// biz fonksiyon olarak de�i�im i�lemini yapt�k �imdi bu i�lemleri a�a��da bast�raca��z.
	sayi1 = sayi2;
	sayi2 = temp;
	
}

int main()
{
	int sayi1,sayi2;
	cout << "Lutfen iki deger giriniz: ";
	cin >> sayi1 >> sayi2;
	
	cout << "Sayi1 degeri: " << sayi1 << endl << "Sayi2 degeri: " << sayi2 << endl;
	
	degerleriDegistir(sayi1,sayi2);
	
	cout << "Sayi1'in yeni degeri: " << sayi1 << endl << "Sayi2'nin yeni degeri: " << sayi2 << endl;
	
	
//hi� bir de�i�iklik ya�anmad� sayi1 in ilk de�eri de 5 fonksiyondan ge�tikten sonra ki ilk de�eri de 5 ��nk�;
/* biz nas�l sayi1=5 degeri ge�i�i olarak ram de deger olarak tutuluyorsa fonksiyon da a�t���m� int sayi1 de farkl� bir ge�i�i degerdir yani;
sayi1 degeri fonksiyonun i�inde bulunan sayi1 degerine ve sayi2 degeri fonksiyon i�inde bulunan sayi2 degerine e�it degildir bunlar�n hepsi farkl�
olarak ram de tutulan degerlerdir. ��z�m olarak art�k bu konuda pointerslar devreye girecek yani fonksiyon i�inde bulunan de�i�kenlerin adreslerini
kullan�c�n�n girdigi degi�kenlerin adresleri ile birbirine adresleme olacak �ekilde yapaca��z. Yaln�z;
!! fonksiyon i�inde bulunanlar� pointers ile(*)- kullan�c�n�n girdiklerini ise adresleme(&) ile alaca��z.
bunun �rne�ini 4-) k�s�mda veriyorum.
return 0;
}

*/	
	
//--------------------------------------------------------------------------------------------------------------------------------------------------------------

//yukar�daki fonksiyon degerleri sayi1 = x sayi2 = y olsun;
#include<iostream>
using namespace std;
void degerleriDegistir(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;		//art�k burada biz bunlar�n degerlerini a�a��da kullan�c�n�n girdigi de�i�ken ile adresle�tirmek i�in pointer ile girdik.
	*y = temp;
	
}

int main(){
	
	
	int sayi1, sayi2, temp;
	
	cout << "Lutfen iki tane deger giriniz: ";
	cin >> sayi1 >> sayi2;
	
	cout << "Sayi1 in degeri: " << sayi1 << endl << "Sayi2 'nin degeri: " << sayi2 << endl;
	
	degerleriDegistir(&sayi1, &sayi2); // burada ise kullan�c�dan al�nan de�i�kenleri adresledik ve fonksiyon i�ideki de�erler ile adreslerini kesi�tirdik.
	
	cout << "Sayi1 'in yeni degeri: " << sayi1 << endl << "Sayi2'nin yeni degeri: " << sayi2 <<endl;
	
	
	

	return 0;
} // bu sayede pointer ve adresleme ile fonksionu kullanarak a ve b say�lar�n�n birbirleri aras�nda ki de�i�imini uygulam�� olduk
