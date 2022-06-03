#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//öðrencilerin not ortalamasýný hesaplayan program.
int main(int argc, char** argv) {

 string isim1 = "Taha";
 string isim2 = "Ecem";
 string isim3 = "Halime";
 string isim[3] = ("Taha","Ecem","Halime");
 
 float OgrencilerinVize1Sonuclari[3];
 float OgrencilerinVize2Sonuclari[3];
 float OgrencilerinFinalSonuclari[3];
 float NotOrtalamalari[3];
 bool OgrencininOkulSeviyesi[3]; // üniversite ise true, lise veya ortaokul ise false.
 
 OgrencininOkulSeviyesi[0] = true;
 OgrencininOkulSeviyesi[1] = false;
 OgrencininOkulSeviyesi[2] = true;
 
 //vize 1 %20, vize 2 %30, final ise %50 olacaktýr.
	int i=0;
	while(i<3){
	 cout << "Lutfen ogrencilerin 1.vize sinavi sonuclarini giriniz:"<< endl;
	 cin >> OgrencilerinVize1Sonuclari[i];
	 i++;
	}

	for(int i=0; i<3; i++){
	 cout << "Lutfen ogrencilerin 2.vize sinavi sonuclarini giriniz: "<< endl;
	 cin >> OgrencilerinVize2Sonuclari[i];	
	}
	
	for(int i=0; i<3; i++){
		cout << "Lutfen ogrencilerin final notlarini giriniz: " << endl;
		cin >> OgrencilerinFinalSonuclari[i];
	}

	for(int i=0; i<3; i++){ //burada öðrencilerin not ortalamalarýný hesapladýk aþaðýda bir döngü daha kullanarak yazdýracaðým
		NotOrtalamalari[i] = OgrencilerinVize1Sonuclari[i]*0.2 + OgrencilerinVize2Sonuclari[i]*0.3 + OgrencilerinFinalSonuclari[i]*0.5; 
	}
	
	
	for(int i=0; i<3; i++){
	
		cout << i+1 << "nci ogrencinin not ortalamasi: " << NotOrtalamalari[i] << endl;
		int OgrenciOrtalama = NotOrtalamalari[i];
		if(OgrenciOrtalama >= 85){
			if(OgrencininOkulSeviyesi[i] = true){
				cout << "Ogreninin Notu AA dustu." << endl;
			}
			else{
				cout << "Ogrencinin karnesine 5 dustu." << endl;
			}	
		}
		
		
	else if(OgrenciOrtalama >=70){
			if(OgrencininOkulSeviyesi[i] = true){
				cout << "Ogrencinin Notu BA dustu." << endl;
			}
			else{
				cout << "Ogrencinin karnesine 4 dustu." << endl;
			}
			
		}
		
			
	else if(OgrenciOrtalama >=55){
			if(OgrencininOkulSeviyesi[i] = true){
				cout << "Ogrencinin Notu BB dustu" << endl;
			}
			else{
				cout << "Ogrencinin kardesine 3 dustu." << endl;
			}
			
		}
		
		
	else if(OgrenciOrtalama>=40){
			if(OgrencininOkulSeviyesi[i] = true){
				cout << "Ogrencinin Notu CB dustu." << endl;
			}
			else{
				cout << "Ogrencinin karnesine 2 dustu." << endl;
			}
			
		}
		else{
			if(OgrencininOkulSeviyesi[i] = true){
				cout << "Ogrencinin Notu FF dustu." << endl;
			}
			else{
				cout << "Ogrencinin karnesine 1 dustu." << endl;
			}
		
		}
	}
	

cout << "-----------------------------------------------------------" << endl;

	for(int i=0; i<3; i++){
		cout << isim[i] << " isimli ogrencinin not ortalamasi: " << NotOrtalamalari[i] << endl;
	}








return 0;
}
