#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Ogrenci{
	
	private:
	string isim;
	int numara;
	
	public:
	
	void setIsim(string yazilacakisim){
		if(yazilacakisim.size()>2){
			isim = yazilacakisim;
		}
		else
		{
			cout << "Yazilan isim 3 harftan kucuk oldugu icin lutfen tekrardan kontrol ediniz" << endl;
		}
	}
	
	void setNumara(int yazilacaknumara){
		if(yazilacaknumara > 0)
		{
			numara = yazilacaknumara;
		}
		else
		{
			cout << "Numaraniz 0'dan buyuk olmak zorundadir." << endl;
		}
	}
	
	string getIsim(){
		return isim;
	}
	
	int getnumara(){
		return numara;
	}
};



int main(int argc, char** argv) {
	
	//1-)
	//yukar�da ilk yapt���m�z kaps�lleme �rne�inin devam�d�r.
	//Ogrenci ogr1;
	/*ogr1.setIsim("Ta");
	ogr1.setNumara(123);
	cout << ogr1.getIsim() << endl << ogr1.getnumara() << endl;
	*/
	
	//2-)
	/*
	//�imdi burada ise class yap�s�nda pointer ile ald���m�zda nas�l oldu�unu yazalum bakal�m.
	Ogrenci *ogr1 = new Ogrenci(); //new int dedi�imizde ram da int de�eri kadar yer a�mas�n� s�yl�yorduk ya ayn� �ekilde burada da ogrenci class'� kadar yer a�mas�n� s�yl�yoruz.
	//klasik pointer da kulland���m�z "->" bu ifade ile alaca��z de�erlerimizi veya yukar�da class yap�s� i�inde olu�turdu�umuz fonksiyonlara "->" bu i�aret ile eri�ece�iz.
	ogr1->setIsim("Taha");
	ogr1->setNumara(1234);
	cout << ogr1->getIsim() << endl << ogr1->getnumara() << endl;
	// bu �ekilde de pointer yap�s� ile de class yap�s�n� nas�l kullanca��m�z� g�rm�� olduk.
	*/
	
	//3-)
	
	
	
	
	return 0;
}
