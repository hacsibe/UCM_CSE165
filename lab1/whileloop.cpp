#include <iostream>

using namespace std;

int main () {

	int num = 0;
	
	while (true) {

	cin >> num;

	if (num == -1){
		break; 
	}

	if (num % 2){
		cout << "ODD" << endl;
	}

	else {
		cout << "EVEN" << endl;
	}
}
}
