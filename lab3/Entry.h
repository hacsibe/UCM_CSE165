
#define Entry_h
#include <iostream>
using namespace std;

struct Entry {

	string name;
	string lastname;
	string email;

	void setName(string name){
		this->name = name;

	}

	void setLastname(string lastname){
		this->lastname = lastname;
	}

	void setEmail(string email){
		this->email = email;
	}
	
	void print(){
		cout << "First name:" << name << endl;
		cout << "Last name:" << lastname << endl;
		cout << "Email:" << email << endl;

	}

};



	