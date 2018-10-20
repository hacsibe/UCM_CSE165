#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
ifstream input_file;
input_file.open("words.txt"); // Open file
string each_word, word_input;
int occurrences = 0, i, flag;
char each_char;
// Input word
cout<<"Enter the word you want to search: ";
cin>>word_input;
// Read each word from file
while(input_file>>each_word){
flag = 1;
// Checking char by char
for(i = 0; i < word_input.length(); i++){
if(!(tolower(each_word[i]) == tolower(word_input[i]))){
// If characters don't match then flag = 0 and exit loop
flag = 0;
break;
}
}
if(flag == 1) // if all characters matched
occurrences++; // One more occurrence
}
// Display
cout<<"\nNumber of occurrences: "<<occurrences<<endl;
return 0;
}
