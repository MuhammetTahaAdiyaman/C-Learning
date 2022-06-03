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
	//yukarýda ilk yaptýðýmýz kapsülleme örneðinin devamýdýr.
	//Ogrenci ogr1;
	/*ogr1.setIsim("Ta");
	ogr1.setNumara(123);
	cout << ogr1.getIsim() << endl << ogr1.getnumara() << endl;
	*/
	
	//2-)
	/*
	//þimdi burada ise class yapýsýnda pointer ile aldýðýmýzda nasýl olduðunu yazalum bakalým.
	Ogrenci *ogr1 = new Ogrenci(); //new int dediðimizde ram da int deðeri kadar yer açmasýný söylüyorduk ya ayný þekilde burada da ogrenci class'ý kadar yer açmasýný söylüyoruz.
	//klasik pointer da kullandýðýmýz "->" bu ifade ile alacaðýz deðerlerimizi veya yukarýda class yapýsý içinde oluþturduðumuz fonksiyonlara "->" bu iþaret ile eriþeceðiz.
	ogr1->setIsim("Taha");
	ogr1->setNumara(1234);
	cout << ogr1->getIsim() << endl << ogr1->getnumara() << endl;
	// bu þekilde de pointer yapýsý ile de class yapýsýný nasýl kullancaðýmýzý görmüþ olduk.
	*/
	
	//3-)
	
	
	
	
	return 0;
}
