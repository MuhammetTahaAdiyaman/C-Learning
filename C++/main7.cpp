#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// basit kullan�c� ad� ve �ifreleme y�ntemi ile giri� yap�lan program �rne�i
int main(int argc, char** argv) {
	
	string eMail;
	string parola;
	
	string kontrolEmail = "taha.adiyaman.com";
	string kontrolParola = "134679";
	
	cout << "Lutfen kullan�c� adinizi giriniz: ";
	cin >> eMail;
	
	cout << "Lutfen sifrenizi giriniz: ";
	cin >> parola;
	
	if(kontrolEmail == eMail && kontrolParola == parola)
	{
		cout << "Basarili sekilde giris yaptiniz." << endl;
	}
	
else if (kontrolEmail == eMail || kontrolParola == parola)
	{
		if (kontrolEmail != eMail)
		{
			cout << "Kullanici adinizi yanlis girdiniz!"<<endl;
			cout << "Lutfen tekrar kullanici adinizi giriniz."<<endl<<endl;
		}
		else
		{
			cout << "Parolanizi yanlis girdiniz !" << endl;
			cout << "Lutfen parolanizi tekrar giriniz" <<endl<<endl;
		}
	}	
	
	else
	{
		cout << "Tum bilgileri lutfen tekrardan kontrol ediniz."<< endl;
	}
	
	
	
	
	
	
	
	return 0;
}
