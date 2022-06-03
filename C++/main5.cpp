#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 6 basamaklý bir sayýnýn sayý deðerleri toplamýný bulan program
int main(int argc, char** argv) {
	
	int toplam, sayi, yuzbinler, onbinler, binler, yuzler, onlar, birler;
	
	cout << "Lutfen 6 basamakli bir sayi giriniz: " << endl;
	
	cin >> sayi;
	
	yuzbinler = sayi / 100000;
	onbinler = (sayi % 100000) / 10000;
	binler = (sayi % 10000) / 1000;
	yuzler = (sayi % 1000) / 100;
	onlar = (sayi % 100) / 10;
	birler = sayi % 10;
	
	cout << yuzbinler << endl << onbinler << endl << binler << endl << yuzler << endl << onlar << endl << birler << endl;
	
	toplam = yuzbinler + onbinler + binler + yuzler + onlar + birler;
	
	cout << "Sayilarin basamaklar toplami: " << toplam << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
