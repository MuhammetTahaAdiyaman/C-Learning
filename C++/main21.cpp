#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//kendim yaptýðým (bakmadan) öðrenci notu hesaplama programý
int main(int argc, char** argv) {

string isim1 = "Taha";
string isim2 = "Ecem";
string isim3 = "Fikret";


int OgrencilerinVize1sonuclari[3];
int OgrencilerinVize2sonuclari[3];
int OgrencilerinFinalsonuclari[3];
int NotOrtalamalari[3];

bool OgrencilerinOKulSeviyesi[3];
OgrencilerinOKulSeviyesi[0] = true;
OgrencilerinOKulSeviyesi[1] = false;
OgrencilerinOKulSeviyesi[2] = true;

// vize1 %20, vize2 %30, final %50 etkili olacaktýr. 

for(int i=0; i<3; i++){
	cout << "Lutfen ogrencilerin 1.vize sonuclarini giriniz: " << endl;
	cin >> OgrencilerinVize1sonuclari[i];
}

int i=0;
while(i<3){
	cout << "Lutfen ogrencilerin 2.vize sonuclarini giriniz: " << endl;
	cin >> OgrencilerinVize2sonuclari[i];
	i++;
}



for(int i=0; i<3; i++){
	cout << "Lutfen ogrencikerin final sonuclarini giriniz: " << endl;
	cin >> OgrencilerinFinalsonuclari[i];
	
}

for(int i=0; i<3; i++){
	NotOrtalamalari[i] = OgrencilerinVize1sonuclari[i]*0.2 + OgrencilerinVize2sonuclari[i]*0.3 + OgrencilerinFinalsonuclari[i]*0.5;
}

for(int i=0; i<3; i++){
	cout << i+1 << "nci ogrencinin ortalamasi:  " << NotOrtalamalari[i] << endl;
	int	OgrenciOrtalamasi = NotOrtalamalari[i];
	
	if(OgrenciOrtalamasi >= 85){
		if(OgrencilerinOKulSeviyesi[i]=true){
			cout << "Ogrencinin ders Notu AA dustu." << endl;
		} 
		else{
			cout << "Ogrencinin notu 5 dustu."<< endl;
		}
		
		
	}
	
	else if(OgrenciOrtalamasi >= 70){
		if(OgrencilerinOKulSeviyesi[i]=true){
				cout << "Ogrencinin notu BA dustu."<< endl;
		}
		else{
			cout << "Ogrencinin notu 4 dustu." << endl;
		}
	
	}
	
	else if(OgrenciOrtalamasi >=55){
		if(OgrencilerinOKulSeviyesi[i]=true){
			cout << "Ogrencinin notu BB dustu." << endl;
		}
		else{
			cout << "Ogrencinin notu 3 dustu." << endl;
		}
		
	}
	
	else if(OgrenciOrtalamasi >=40){
		if(OgrencilerinOKulSeviyesi[i]=true){
			cout << "Ogrencinin notu CA dustu." << endl;
		}
		else{
			cout << "Ogrencinin notu 2 dustu." << endl;
		}
	
	}

	else{
		if(OgrencilerinOKulSeviyesi[i]=true){
			cout << "Ogrencinin notu 2 dustu." << endl;
		}
		else{
			cout << "Ogrencinin notu 1 dustu.";
		}
		
	}

}










	return 0;
}
