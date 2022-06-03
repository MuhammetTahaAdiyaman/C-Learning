#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//kelime içerisinde ki harflerin alfabetik olarak sýralandýrma programý
int main(int argc, char** argv) {
/*	
	//1-**programýn algoritmasý þu þekilde olacak ilk harden itibaren diðer harfleri sorgula eðer ki senden önce gelen bir harf varsa kendinle yer deðiþtir**
   //2-bu programda bir karakter dizisi ve bu karakter dizisinin içindeki elemanlarýný saymak için bir sayma aracý olmasý gerek(sayaç)
	//3-'\0' koymasýnýn nedeni o dizin içinde karakter dizisinin bittiði için
	char dizi[40]; //maksimum 40 harf alan bir dizidir.(39 elemana sahip olacak son eleman '\0' oluyor.
	int sayac=0; // buda dizinin içindeki elemanlarýmýzý saymamýza yardýmcý olacak deðer.	
	int temp;// index deðiþiminde sayýnýn kaybolmamasý için bunu o indexteki sayýya eþitleyeceðiz
	//þimdi elemanlarýmýzý bir saydýralým yani bir kelime kaç harften oluþtuðunu öðrenelim
	//ilk önce bir kullanýcýdan eleman alalým daha sonra bu elemanlarý while veya for döngüsü ile bastýralým.
	
	cout << "Lutfen bir kelime giriniz: " << endl;
	cin >> dizi;
	
	while(dizi[sayac] != '\0'){ //þimdi dizi '\0' a gelince bitiyordu o zaman dizi içindeki karakter sayýyýsýný arttýrarak bastýr) 
		sayac++;
	}
	
	//cout << sayac << endl; // biz bu döngü ile bir kelime kaç tane harfe sahip olduðunu ekrana bastýrabiliyoruz.
	
	
	//þimdi sýra geldi bu dizinin içindeki harfleri deðiþtirip ekrana yazdýrmaya.
	
	//bizim iki tane deðiþkene ihtiyacýmýz var yani iki harf karþýlaþtýrýyoruz 0 index ile 1. indexi veya 2.index ile 3. index
   //ilk deðiþkenimiz "i" ikincisi ise "j" ilk "i" o anki tuttuðum harf yani hangi harfi karþýlaþtýrmak istediðim "j" de gezindiðim harfler.
   
   int i=0, j=0;
   while(i<sayac-1){
   		
		j = i+1; // neden bunu bu þekilde yazdýk çünkü þöyle ahmet ismi diyelim a harfi i=0 olduðu için, j deðerinin de gezdirmemiz gerekiyor j deðeri a ile yanýndaki harfleri kýyaslamak için i+1 oldu.
   		
		   while(j<sayac){
   				
   				if(dizi[i]>dizi[j]){
   						temp = dizi[i]; //0.indexteki harfi buna eþitledik ki deðiþim sýrasýnda uçup gitmesin
   						dizi[i] = dizi[j]; //burada harf deðþimi gerçekleþtildi yani sonra gelen harf 1.index'e geçti ama 0.index boþta
				   		dizi [j] = temp;//bu þekilde de 0.indexin yerini alan ve harf sýrasýnda önce gelen harf yerine geçiyor.
				   }
				j++;// bunu yapmamýzýn sebebi ise yukarýda 0.index ile 1.index yani i=tuttuðumuz sayý j=karþýlaþtýrýlan yani dolaþan harf o yüzden tuttuðumuz sayýyý bir sonraki harflerle de karþýlaþtýrmak istediðimiz için bu þekilde yazdýk.	   }     
			} 
		 i++; //bunu yapmamýzýn sebebi de tuttuðumuz ilk sayý yanýndaki tüm harflerle karþýlaþtýktan sonra yani ahmet kelimesinin a'sý(h-m-e-t) ile karþýlaþtýktan sonra sýra;
   			//i sayýsý h olur ve h harfi(m-e-t) harfleri ile karþýlaþmasý gerekir bundan dolayý i yi bir arttýrýyoruz.
 	}
	
	cout <<dizi<< endl;
	
*/	
	
	//eðer yukarýda iþlemin kýsa yolunu istersek ilk önce char olarak girdiðimiz ifadeyi stringe çevirmemiz gerek çünkü buna özel string fonksiyonu vardýr
	//1-kütüphanemize #include<bist/stdc++.h> ekleyeceðiz 
	// þimdi char ý stringe çevirelim
	string dize;
	
	//kullanýcýdan bir veri alalým
	
	cout << "Lutfen bir kelime giriniz: "<< endl;
	cin >> dize;
	
	//bunun özel fonksiyonunu yazalým
	
	sort(dize.begin(),dize.end());
	
	//þimdi bunu yazdýralým
	
	cout << dize << endl;
	
// ve bu þekilde de özel olarak kullanabiliriz.	
	

	
	return 0;
}
