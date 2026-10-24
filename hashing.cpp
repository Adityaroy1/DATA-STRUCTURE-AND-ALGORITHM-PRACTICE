#include <iostream>
#include <string>
using namespace std;
struct employee {
	string username;
	int hashed_password;
};
class AuthSystem {
    private:
	employee userdata[10];
	int count=0;
	int hash_pass(string password) {
		int hash;
		for(int i=0; i<password.length(); i++) {
			hash+=password[i]*(i+1);
		}
		return hash;
	}
	public:
	void addUser() {
		string name;
		string pass;
        count++;
		cout<<"Enter your Username"<<endl;
		cin>>name;
		cout<<"Enter your password"<<endl;
		cin>>pass;
		userdata[count].username=name;
		int hashed=hash_pass(pass);
		userdata[count].hashed_password=hashed;
		cout<<"LOGIN ID has been created"<<endl;
		
	}
	void login(){
		string name;
		string pass;
		cout<<"Enter your Username"<<endl;
		cin>>name;
		cout<<"Enter your password"<<endl;
		cin>>pass;
		bool passed=false;
		for (int i=0; i<=count;i++) {
			if(userdata[count].username==name) {
				passed=true;
				break;
			}
		}
		if (passed= false) {
			cout<<"User not found"<<endl;
			return;
		}
		int attempt =3;
		int given_hash= hash_pass(pass);
		while(attempt!=0) {
		
			if (userdata[count].hashed_password == given_hash) {
			    	cout<<"Youe have "<<attempt<<" attempts"<<endl;
				cout<<"login sucessfull"<<endl;
				return;
			}
			else {
				cout<<"worng password, try again"<<endl;
				count--;
			}
		}
		cout<<"attempts over , bye"<<endl;
	}
};
int main() {
	AuthSystem auth;
	int choice;
	while (true) {
		cout << "\n--- Employee Authentication System ---\n";
		cout << "1. Add Employee 2. Login 3. Exit\n";
		cout << "Enter your choice: ";
		if (!(cin >> choice)) {
			cout << "Invalid input. Please enter a number.\n";
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		switch (choice) {
		case 1:
			auth.addUser();
			break;

		case 2:
			auth.login();
			break;
		case 3:
			cout << "Exiting...\n";
			return 0;
		default:
			cout << "Invalid choice. Try again.\n";
		}
	}
}