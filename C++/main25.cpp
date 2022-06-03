#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//kelime i�erisinde ki harflerin alfabetik olarak s�raland�rma program�
int main(int argc, char** argv) {
/*	
	//1-**program�n algoritmas� �u �ekilde olacak ilk harden itibaren di�er harfleri sorgula e�er ki senden �nce gelen bir harf varsa kendinle yer de�i�tir**
   //2-bu programda bir karakter dizisi ve bu karakter dizisinin i�indeki elemanlar�n� saymak i�in bir sayma arac� olmas� gerek(saya�)
	//3-'\0' koymas�n�n nedeni o dizin i�inde karakter dizisinin bitti�i i�in
	char dizi[40]; //maksimum 40 harf alan bir dizidir.(39 elemana sahip olacak son eleman '\0' oluyor.
	int sayac=0; // buda dizinin i�indeki elemanlar�m�z� saymam�za yard�mc� olacak de�er.	
	int temp;// index de�i�iminde say�n�n kaybolmamas� i�in bunu o indexteki say�ya e�itleyece�iz
	//�imdi elemanlar�m�z� bir sayd�ral�m yani bir kelime ka� harften olu�tu�unu ��renelim
	//ilk �nce bir kullan�c�dan eleman alal�m daha sonra bu elemanlar� while veya for d�ng�s� ile bast�ral�m.
	
	cout << "Lutfen bir kelime giriniz: " << endl;
	cin >> dizi;
	
	while(dizi[sayac] != '\0'){ //�imdi dizi '\0' a gelince bitiyordu o zaman dizi i�indeki karakter say�y�s�n� artt�rarak bast�r) 
		sayac++;
	}
	
	//cout << sayac << endl; // biz bu d�ng� ile bir kelime ka� tane harfe sahip oldu�unu ekrana bast�rabiliyoruz.
	
	
	//�imdi s�ra geldi bu dizinin i�indeki harfleri de�i�tirip ekrana yazd�rmaya.
	
	//bizim iki tane de�i�kene ihtiyac�m�z var yani iki harf kar��la�t�r�yoruz 0 index ile 1. indexi veya 2.index ile 3. index
   //ilk de�i�kenimiz "i" ikincisi ise "j" ilk "i" o anki tuttu�um harf yani hangi harfi kar��la�t�rmak istedi�im "j" de gezindi�im harfler.
   
   int i=0, j=0;
   while(i<sayac-1){
   		
		j = i+1; // neden bunu bu �ekilde yazd�k ��nk� ��yle ahmet ismi diyelim a harfi i=0 oldu�u i�in, j de�erinin de gezdirmemiz gerekiyor j de�eri a ile yan�ndaki harfleri k�yaslamak i�in i+1 oldu.
   		
		   while(j<sayac){
   				
   				if(dizi[i]>dizi[j]){
   						temp = dizi[i]; //0.indexteki harfi buna e�itledik ki de�i�im s�ras�nda u�up gitmesin
   						dizi[i] = dizi[j]; //burada harf de��imi ger�ekle�tildi yani sonra gelen harf 1.index'e ge�ti ama 0.index bo�ta
				   		dizi [j] = temp;//bu �ekilde de 0.indexin yerini alan ve harf s�ras�nda �nce gelen harf yerine ge�iyor.
				   }
				j++;// bunu yapmam�z�n sebebi ise yukar�da 0.index ile 1.index yani i=tuttu�umuz say� j=kar��la�t�r�lan yani dola�an harf o y�zden tuttu�umuz say�y� bir sonraki harflerle de kar��la�t�rmak istedi�imiz i�in bu �ekilde yazd�k.	   }     
			} 
		 i++; //bunu yapmam�z�n sebebi de tuttu�umuz ilk say� yan�ndaki t�m harflerle kar��la�t�ktan sonra yani ahmet kelimesinin a's�(h-m-e-t) ile kar��la�t�ktan sonra s�ra;
   			//i say�s� h olur ve h harfi(m-e-t) harfleri ile kar��la�mas� gerekir bundan dolay� i yi bir artt�r�yoruz.
 	}
	
	cout <<dizi<< endl;
	
*/	
	
	//e�er yukar�da i�lemin k�sa yolunu istersek ilk �nce char olarak girdi�imiz ifadeyi stringe �evirmemiz gerek ��nk� buna �zel string fonksiyonu vard�r
	//1-k�t�phanemize #include<bist/stdc++.h> ekleyece�iz 
	// �imdi char � stringe �evirelim
	string dize;
	
	//kullan�c�dan bir veri alal�m
	
	cout << "Lutfen bir kelime giriniz: "<< endl;
	cin >> dize;
	
	//bunun �zel fonksiyonunu yazal�m
	
	sort(dize.begin(),dize.end());
	
	//�imdi bunu yazd�ral�m
	
	cout << dize << endl;
	
// ve bu �ekilde de �zel olarak kullanabiliriz.	
	

	
	return 0;
}
