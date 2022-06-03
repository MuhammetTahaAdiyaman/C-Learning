#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// kullanýcý adý ve þifre girilmesini istenen program.
int main(int argc, char** argv) {

	string eMail;
	string parola;
	
	string kontrolEmail = "admin@admin.com";
	string kontrolParola = "admin";
	
	cout << "Lutfen Kullanici Adi ve Sifrenizi giriniz: ";
	cin >> eMail >> parola;
// && operötörü kullandýk giriþ yapabilmemiz için ikisininde doðru olmak zorundadýr.	
	if(kontrolEmail == eMail && kontrolParola == parola )
	{
		cout << "Basarili giris yaptiniz " << endl;
	}
	// biz burada veya operatörünü kullandýðýmýz için ikisinden biri yanlýþ çýkarsa;
	// bize bir bilgi yanlýþlýðý oldu gibisinden mesaj gelmesi için yapalým.
	else if(kontrolEmail == eMail || kontrolParola == parola)
	{
		cout << "bir bilgiyi yanlis girdiniz" << endl;
	}
// eðer program buraya kadar ulaþabiliyorsa tüm bilgileri yanlýþ girmiþtir.	
	else 
	{
		cout << "Butun bilgileri tekrardan kontrol ediniz." << endl;
	}
	

	return 0;
}
