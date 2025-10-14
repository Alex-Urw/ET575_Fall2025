/*
Alexander Urwand
October 14, 2025
lab 9, while and do-while loop
*/

#include <iostream>

using namespace std;

int main() {
    cout <<"\n ----- Example 1: While Loop as a Counter ----- " << endl;
    // print from 1 to 5
    int n = 1;
    while(n <= 5) {
        cout<<n<<"\t";
        n ++;
    }
    cout<<endl;

    cout <<"\n ----- Example 2: While Loop as a Counter ----- " << endl;
    // Print from 3 to 0

    int m = 3;
    while(m >= 0){
        cout<<m<<"\t";
        m --;
    }
    cout<<endl;

    cout <<"\n ----- Example 3: While Loop as a Decrement Counter ----- " << endl;
    // Checks after the code is run.

    m = 3;
    while(m-- >= 0) {
        cout<<m<<"\t";

    }
    cout<<endl;

    cout <<"\n ----- Example 4: While Loop as a Decrement Counter ----- " << endl;
    //Checks before the code is run.

    m = 3;
    while(--m >= 0) {
        cout<<m<<"\t";

    }
    cout<<endl;

    cout <<"\n ----- Example 5: While Loop to Validate a Number ----- " << endl;

    int num;
    cout<<"Enter a number between 10 and 20 inclusive: "<<endl;
    cin>>num;

    // If the number is not between 10 and 20, use a while loop to recollect the number.

    while(! (num >= 10 && num <= 20)){
        cout<<"Invalid. Enter a number between 10 and 20 again: ";
        cin>>num;

    }

    cout<<"The entered number is "<<num<<endl;

    cout <<"\n ----- Example 6: Do-While Loop to Validate a Number ----- " << endl;

    do{
    cout<<"Enter a number between 10 and 20 inclusive: "<<endl;
    cin>>num;
    }

    while(! (num >= 10 && num <= 20));
    
    cout<<"End of do-while loop. Entered number = "<<num<<endl;

    cout <<"\n ----- Example 7: Do-While Loop to Validate a Number ----- " << endl;
    // Do-While to run the program again 
    // Program checks if a number is positive, negative, or zero.
    int number;
    char choice = 'y';
    do{
        cout<<"Enter a number: ";
        cin>>number;
        if(number == 0) {
            cout<<"The number is zero!"<<endl;
        }
        else if (number > 0) {
            cout<<number<< " is positive."<<endl;
        }
        else if (number < 0) {
            cout<<number<< " is negative."<<endl;
        }
        cout<< "Do you want to check another number? ";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');

    cout <<"\n ----- Example 8: Do-While Loop Set to True ----- " << endl;
    n = 0;
    int sum_positive = 0;
    do{
        cout<<"Enter a positive number: "<<endl;
        cin>>n;
        if(n >= 0) {
            sum_positive += n;
        }
        else{
            break;
        }
    }
    while(true);

    cout<<"The total sum is "<<sum_positive<<endl;

    cout <<"\n ----- Example 9: Withrwal from Bank Account ----- " << endl;
    int balance = 1000;
    int w = 0;
    while(true){
        cout<<"How much do you want to withdraw? "<<endl;
        cin>>w;

        if(w > balance) {
            cout<<"Can't withdrawl $"<<w<<". Enter another amount: "<<endl;
        }
        else{
            balance -= w;
            cout<<"Withdrew $"<<w<<". The new balance is $"<<balance<<endl;
            break;
        }

    }

    cout<<"Thank you for banking with us!"<<endl;

    cout <<"\n ----- Example 10: Continue Statement ----- " << endl;
    //While loop to print, from 0 to 10, and add all the numbers except 5.
    int sum_all = 0;
    int x = 0;
    while(x++ < 10) {

        if(x == 5) {
        continue;
    }
    sum_all +=x;
    cout<<x<<"\t";

    }
    cout<<"The total sum of numbers = "<<sum_all<<endl;

    cout<<"------- Lab Exercise -------"<<endl;

    //Below I declare my variable for the input as well as the variable of the sum of inputs.

    int sum_numbers = 0;
    int y = 0;
    // Below, it says to execute the code prompting user input for code and storing it as y.
    // I put a condition stating that if the input is not equal to 0, the input will be added to all previous inputs within the sum_numbers variable.
    // My else condition states that anything else input will stop the program. The only acceptable input to make my else statement True would be entering 0.
        do{
        cout<<"Enter a number: "<<endl;
        cin>>y;
        if(y != 0) {
            sum_numbers += y;
        }
        else{
            break;
        }
    }
    // Here I have the while loop, indicating that while the condition for the if statement is true, it will loop and repeat the process.
    // When the else statement is true, the program will break and go straight to my printed output.
    while(true);

    // Here, I print out a string sentence indicating the total sum and input the sum_number variable to display, proving functionality.

    cout<<"The total sum is "<<sum_numbers<<endl;

    // Lab HW 9 is complete.

    







  




    return 0;
}