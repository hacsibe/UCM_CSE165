#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	fstream input("words.txt");
	string str;
	int count =0;
	string word;
	auto it = begin(str);
	ispunct(*it);
	cin>>word;

	std::transform(word.begin(), word.end(), word.begin(), ptr_fun<int, int>(std::toupper));

while(input >> str){
	transform(str.begin(), str.end(), str.begin(), ptr_fun<int, int>(std::toupper));

	for( it = begin(str); ispunct(*it);){
		it = str.erase(it);
	}
	for(auto it = prev(end(str)); ispunct(*it); --it){
		it = str.erase(it);
	}

if(str == word){
	++count;

		}


	}	

	cout<< count<< endl;
	return 0;
}