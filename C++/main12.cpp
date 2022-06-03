#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//hesap makinesi
int main(int argc, char** argv) {
	
	float sayi1, sayi2;
	float toplama, cikarma, carpma, bolme, mod;
	int islem;
	
	cout << "Lutfen yapmak istediginiz islemi seciniz: " << endl;
	cout << "1.Toplama islemi " << endl;
	cout << "2.Cikarma islemi " << endl;
	cout << "3.Carpma islemi "  << endl;
	cout << "4.Bolme islemi "   << endl;
	cout << "5.Mod islemi "		<< endl;
	cin >> islem;
	
	cout << "Lutfen 2 sayi degeri giriniz: " << endl; 
	cin >> sayi1 >> sayi2;
	
	if(islem == 1)
	{
		toplama = sayi1 + sayi2;
		cout << "Sonuc: " << toplama << endl;
	}
	
else if(islem ==2)	
	{
		cikarma = sayi1 - sayi2;
		cout << "Sonuc: " << cikarma << endl;
	}
	
else if(islem == 3)	
	{
		carpma = sayi1*sayi2;
		cout << "Sonuc: " << carpma << endl;

	}
	
else if(islem == 4)	
	{
		bolme = sayi1 / sayi2;
		cout << "Sonuc: " << bolme << endl;
	}
	
else if(islem == 5)
	{
		mod = int(sayi1) % int(sayi2);
		cout << "Sonuc: " << mod << endl;
	}	
	
	else
	{
		cout << "Yanlis veya Eksik tuslama yaptiniz lutfen tekrardan deneyiniz." << endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
