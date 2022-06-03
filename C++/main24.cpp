#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	string isimler[3] = ("taha","ecem","fikret");
	float OgrenciVize1Notlari[3];
	float OgrenciVize2Notlari[3];
	float OgrenciFinalNotlari[3];
	float NotOrtalama[3];
	//birinci vize %20, ikinci vize %30, final ise %50 etkilidir.
	bool OgrenciOkulSeviyesi[3];
	OgrenciOkulSeviyesi[0] = true;
	OgrenciOkulSeviyesi[0] = false;
	OgrenciOkulSeviyesi[0] = true;
	int i= 0;
	while(i<3){
		
		cout << "Lutfen Ogrencilerin 1.vize notlarini giriniz: ";
		cin >> OgrenciVize1Notlari[i];
		i++;
		
	}
	cout << endl;
	
	for(int i=0; i<3; i++){
		
		cout << "Lutfen ogrencilerin 2.vize notlarini giriniz: ";
		cin >> OgrenciVize2Notlari[i];
	}
	
	cout << endl;
	
	for(int i=0; i<3; i++){
		
		cout << "Lutfen ogrencilerin final notlarini giriniz: ";
		cin >> OgrenciFinalNotlari[i];
	}
	
	cout << endl;
	
	for(int i=0; i<3; i++){
		NotOrtalama[i] = OgrenciVize1Notlari[i]*0.2 + OgrenciVize2Notlari[i]*0.3 + OgrenciFinalNotlari[i]*0.5;
	}
	
	for(int i=0; i<3; i++){
		cout << i+1 << "nci ogrencinin ortalamasi: " << NotOrtalama[i] << endl;
	
	int OgrenciOrtalamasi = NotOrtalama[i];
			if(OgrenciOrtalamasi >= 85){
				if(OgrenciOkulSeviyesi[i] = true)
				{
					cout << "Ogrencinin Ortalamasi AA dustu." << endl;
				}
				else
				{
					cout << "Ogrencinin karnesine 5 dustu." << endl;;
				}
			}
		
		
		else if(OgrenciOrtalamasi >= 70){
			if(OgrenciOkulSeviyesi[i] == true)
			{
				cout << "Ogrencinin Ortalamasi BB dustu" << endl;
			}
			
			else
			{
				cout << "Ogrencinin karnesine 4 dustu" << endl;
			}
		} 
		
		
		else if(OgrenciOrtalamasi >=55){
			if(OgrenciOkulSeviyesi[i] == true)
			{
				cout << "Ogrencinin CC Ortalamasi dustu" << endl;
			}
			
			else
			{
				cout << "Ogrencinin karnesine 3 dustu" << endl;
			}	
		}
		
		else if(OgrenciOrtalamasi >=40){
			if(OgrenciOkulSeviyesi[i] == true)
			{
				cout << "Ogrencinin Ortalamasi DD dustu" << endl;
			}
			
			else
			{
				cout << "Ogrencinin karnesine 2 dustu" << endl;
			}	
		}
		
		else{
			if(OgrenciOkulSeviyesi[i]==true)
			{
				cout << "Ogrencinin Ortalamasi FF dustu" << endl;
			}
			
			else 
			{
				cout << "Ogrencinin karnesine 1 dustu" << endl;
			}	
		}
		
		}
	
	cout << "-------------------------------------------------------------" << endl;
	
		for(int i=0; i<3; i++){
			cout  << i+1 << "nci ogrencinin ortalamasi: " << NotOrtalama[i] << "dustu" << endl;
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
