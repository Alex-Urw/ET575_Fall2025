#include <iostream>
#include <string>
using namespace std;

int main() {

// I declare word as an empty string and use a print statement to prompt input
// User input is stored as value for variable "word"
string word = "";
cout<<"Type a word from your keyboard: "<<endl;
cin >> word;

//I type the index number for the second character at the end of the variable
cout<<"2nd character = "<<word[1]<<endl;

// I store 'characters' with an integer value and use the length method to indicate how many characters are in the word
// I print it to display functionality
int characters = word.length();
cout<<"The word has: "<<characters<<" characters. "<<endl;

// I use the replace method to replace 2 characters from the 3rd character(identified by index number)
// I replace them with "--$--"
// I print the functioning result
word.replace(2,2,"--$--");
cout<<"Replaced word: "<<word<<endl;



//cout<<"Remove end characters: "<<<<endl;

    return 0; 
}