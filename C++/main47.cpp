#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class App{
	private: 
	string UserName = "muhammettahaadiyaman@gmail.com";
	int Password = 13798246;
	
	public:
	void setUser(string passName)
	{
		if(UserName == passName)
		{	
			passName = UserName;
			
		}
		
		else
		{
			cout << "Username is wrong. Please try again" << endl;
		}
	}
	
	void setPasswords(int passPassword)
	{
		if(Password == passPassword)
		{
			Password = passPassword;
		
		}
		else
		{
			cout <<"Password is wrong entry. Please try again" << endl;
		}
		
	}
	
	string getUser()
	{
		return UserName;
	}
	
	int getPasswords()
	{
		return Password;
	}
	
};


int main(int argc, char** argv) {
	
	App *application = new App();
	 
	
	application->setUser("muhammettahaadiyaman@gmail.com");
	application->setPasswords(13798246);
	

	cout << "User name: " << application->getUser() << endl << "Password: " << application->getPasswords() << endl;
	
	
	
	
	return 0;
}
