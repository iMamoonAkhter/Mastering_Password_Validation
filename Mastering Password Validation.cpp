#include<iostream>
using namespace std;
int main(){
	string a,correct;
	cout << "Enter a password: ";
	correct = "password123";
	cin >> a;
	do{
		cout << "You have entered wrong password" << endl;
		cout << "Enter again password: ";
		cin >> a;
		continue;
	}while(a!=correct);
	cout << "You have entered correct password";
	return 0;
}
