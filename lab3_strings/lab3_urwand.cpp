/*
Alexander Urwand
Lab 3, string and string methods
Sept. 8, 2025
*/

#include <iostream> 
#include <string>

using namespace std; 

int main() {

cout << "\n------ Example 1: String Indexing -----" << endl;

// To declare a string first type string and put value in quotations
string first_name = "Peter";

cout << "The 3rd character = " << first_name[2]<<endl;
// Assess charachter of a string by using square brackets after string name

// Can also call string index by using at() function
cout<<"The 1st character = " << first_name.at(0)<<endl;

cout <<"\n-------Example 2: Amount of characters in a string ------"<<endl;

// length function counts amount of characters in a string 
int characters =first_name.length();
cout<<"There are "<<characters<<" character/s in "<<first_name<<endl;


cout<<"\n------- Example 3: Concatenate character/s in a string -------"<<endl;

// concatonating just means to add them together
string last_name = "Pan";
string username = "PP123";

cout<<"Concatenated word = "<<first_name + last_name + username<<endl;

cout<<"\n-------- Example 4: Subtracting characters in a string ------- " <<endl;

string msg = "Today is a beautiful day!";
// extract 5 characters from the 3rd character 
// to subtract, use the substr() method

string subst_char = msg.substr(2, 5);
cout<<"Extracted characters = "<<subst_char<<endl;

cout<<"\n------- Example 5: inserting characters in a string -------- "<<endl;

// insert the word "maybe"
// Use direct method (insert method), don't need to save it in a string
// Direct methods automatically updates the value of the variable

msg.insert(6, "maybe ");
cout<<"After insert method = "<<msg<<endl;

cout<<"\n-------- Example 6: Inserting characters to the end of a string ------ "<<endl;

// This is done through the append method

msg.append(" - by Alex");

cout<<"After append method = "<<msg<<endl;

cout<<"\n------ Example 7: inserting characters to the end of a string -------"<<endl;

// This is done by using the replace method 
// in () you include index of starting character of word to replace, how many characters in the word,
// and then what you choose to replace it with.

msg.replace(17,9,"bad");
cout<<"After replaced method = "<<msg<<endl;

cout<<"\n------- Example 8: Erasing characters from a string -----------"<<endl;

// Erase the word 'today'
// In the rease method, in () put the starting character index number and how many characters in that you want to erase

msg.erase(0,5);
cout<<"After erase method = "<<msg<<endl;

cout<<"\n -------- Example 9: Finding characters in a string ----------"<<endl;

// When you find a character, it will tell you if the character is found or not
// If the character/s was not found, it returns -1
// Find method will return the index number of the first found
// Find the word 'Alex'

int index_alex = msg.find("Alex");
cout<<"The index of Alex = "<<index_alex<<endl;


    return 0;
}