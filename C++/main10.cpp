#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//��genin i� a��lar�na g�re tipini s�yleyen program
int main(int argc, char** argv) {
	
	float ucgenAci1, ucgenAci2, ucgenAci3;
	
	cout << "Lutfen ucgenin ic acilaririni giriniz: " << endl;
	cin >> ucgenAci1 >> ucgenAci2 >> ucgenAci3;
	
	float acilarToplami;
	
	acilarToplami = ucgenAci1 + ucgenAci2 + ucgenAci3;
	
	if(acilarToplami == 180)
	{
		if(ucgenAci1 == 60 && ucgenAci2 == 60)
		{
			cout << "Bu ucgen bir eskenar ucgendir."; // burada if i�inde if ve else if kullan�m�da yapm�� olduk.
		}
		
		else if(ucgenAci1 == ucgenAci2 && ucgenAci1 != ucgenAci3)
		{
			cout << "Bu ucgen ikizkenar bir ucgendir.";
		}
	
		else if(ucgenAci1 == ucgenAci3 && ucgenAci1 != ucgenAci2)
		{
			cout << "Bu ucgen ikizkenar bir ucgendir.";
		}
	
		else if(ucgenAci2 == ucgenAci3 && ucgenAci2 != ucgenAci1)
		{
			cout << "Bu ucgen ikizkenar bir ucgendir.";
		}
	
		else
		{
			cout << "Bu ucgen cesitkenar bir ucgendir.";
		}
	}
	
		
	else 
	{
		cout << "Acilar toplami 180 derece degildir.";
	}
	
	
	
	
	/*else if(ucgenAci1 == ucgenAci2 && ucgenAci1 != ucgenAci3)
		{
			cout << "Bu ucgen ikizkenar bir ucgendir.";
		}
	
		else if(ucgenAci1 == ucgenAci3 && ucgenAci1 != ucgenAci2)
		{
			cout << "Bu ucgen ikizkenar bir ucgendir.";
		}
	
		else if(ucgenAci2 == ucgenAci3 && ucgenAci2 != ucgenAci1)
		{
			cout << "Bu ucgen ikizkenar bir ucgendir.";
		}
	
		else
		{
			cout << "Bu ucgen cesitkenar bir ucgendir.";
		}
	
	bunun daha k�sa bir yolu daha var;
	
		else if(ucgenAci1 == ucgenAci2 || ucgenAci1 == ucgenAci3 || ucgenAci2 == ucgenAci3)
		{
			cout << "Bu ucgen ikizkenar bir ucgendir. << endl;
	
		}
	
		else
		{
			cout << "Bu ucgen cesitkenar bir ucgendir. << endl;
	
		}
	*/
	
	
	
	
	
	
	
	return 0;
}
