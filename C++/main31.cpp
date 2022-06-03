#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//fibonacci serisini yapaca��z(recursive fonkiyona �rnek verece�iz)

int fibonacci(int indisdegeri)
{
	if(indisdegeri==0 || indisdegeri ==1) //1-1-2-3-5-8 s�ras�ndan dolay� 0 ve 1. indisler 1 oldu�u i�in if kavram�nda bunlar� 1 yapt�k
	{
		return 1;
	}
	else
	{
		return fibonacci(indisdegeri-1) + fibonacci(indisdegeri-2); // daha sonra fn = fn-1 + fn-2 kural�nda fibonacci ortaya ��kt��� i�in biz burada bu kural� return ettik
	}

}

int toplamdeger(int sayi)
{
	int toplam=0;
	for(int i=0; i<=sayi; i++)
	{
		toplam = toplam+fibonacci(i);
	}
	return toplam;
	
	
}

int main(int argc, char** argv) {
	
	int x0 = fibonacci(0);	//burada ise indis de�erlerini bulduk 0.indise0 verdik if e giri�inden =1 oldu
	int x1 = fibonacci(1);  //burada ise indis de�erlerini bulduk 1.indise1 verdik if e giri�inden =1 oldu
	int x2 = fibonacci(2);	//burada ise indis de�erine 2 verdik yani else girer f(2) = f(2-1)+f(2-2) buradan da 1+1 = 2 oldu
	int x3 = fibonacci(3);	//burada ise indis degerine 3 verdik yani else girer f(3) = f(3-1)+f(3-2) buradan da f(2)=2 + f(1) =1 = 3 olur
	int x4 = fibonacci(4);	// burada ise indis degerine 4 verdik yani else girer (f4) = f(4-1)+f(4-2) = f(3)+f(2) = 3+2 =5 oldu.
	int x5 = fibonacci(5); 	// burada ise indis degerine 5 verdik yani else girer f(5) = f(5-1)+f(5-2) = f(4)+f(3) = 5+3 =8 oldu.

	cout << x0 << " " << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl;
	//1-)e�er biz fibonacci dizelerinin aras�ndaki say�lar�n toplam�n� bulmak istersek e�er ayr� bir fonksiyon olarakda yazabiliriz burada da i�lem yapabiliriz.
/*	int toplam=0;
	for(int i=0; i<=5; i++)
	{
		toplam = toplam+fibonacci(i);	//biz burada sadece fibonacci(5) dizesinde ki toplam de�eri ald�k e�er istedigimiz bir say�n�n degerini istersek yukar�ya ayr� bir fonksiyon olarak olu�turup bast�rabiliriz.
	}
	cout << "toplam deger: " << toplam << endl;
*/

//2-) yukar�da olu�turdugumuz fonksiyonda da toplam� bast�rmam�z i�in �imdi kullan�c�dan ka��nc� dizeden itibaren toplatmak istiyorsa bir de�er alal�m.
	int sayi1;
	cout << "Lutfen fibonacci serisinde toplatmak istediginiz say� aral�g�na esit olan degeri giriniz: ";
	cin >> sayi1;
	
	int sayitoplami= toplamdeger(sayi1);
	cout << "Toplam deger: " << sayitoplami << endl;
	return 0;
}
