#include <iostream>
using namespace std;
//void fonksiyonu ile karesini hesaplama
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void karesinihesaplama(int sayi) //parantez içine parametre yazacaðýz örenðin karesini hesaplamak için integer sayý girelim
{
	int kare = sayi*sayi;
	cout << "Sayinin karesi: " << kare << endl;
	//biz buraya sadece fonksiyonu tanýmlýyoruz aþaðýda yani int main kýsmýnda bu fonksiyonu kullanacaðýz.
	
}

void merhaba()
{
	
	cout << "Merhaba genclik, c++ Nasil gidiyor ? :)" << endl; //ayrýyeten biz alt alta iki void fonksiyonu da girebiliyoruz
	
}

int main(int argc, char** argv) //þimdi burada oluþturduðumuz fonksiyonu kullanacaðýz
{
	int sayi2;
	cout << "Lutfen karesini almak istediginiz sayiyi giriniz: ";
	cin >> sayi2;
	
	karesinihesaplama(sayi2); //sayi2 için yukaridaki fonksiyonu kullanýyoruz yani bir nevi sayi2 yi yukarýdaki fonksiyona yollayýp oradaki iþlemlerden geçip ekrana basýlacak
	merhaba();
	
	
	return 0;
}	
