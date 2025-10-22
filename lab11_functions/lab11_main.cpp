/*
Alexander Urwand
Lab 11, Introduction to Functions 
*/
#include <iostream>
#include "lab11_function.cpp"

using namespace std;

int main(){
    cout<<"----- Example 1: Void Function -----"<<endl;
    printhello();
    printhello();
    printhello();

    cout<<"----- Example 2: Void Function with Arguments -----"<<endl;
    string username = "Anna";
    greeting("Peter");
    greeting(username);
    greeting("Carl");

    cout<<"----- Example 3: Function with Returning Value -----"<<endl;
    int savefive = returnfive();
    savefive +=2 ;
    cout<<"The returning value after += 2 = \t "<<savefive<<endl;

    cout<<"----- Example 4: Code after the return -----"<<endl;
    printsome();
    int n = somenumber();
    cout<<"Some number \t "<<n<<endl;

    cout<<"----- Example 5:Calculate area of the square -----"<<endl;

    float area_square = areasquare(2.5);
    cout<<"The area of a square is \t"<<area_square<<endl;

    cout<<"----- Example 6: Product of two numbers -----"<<endl;

    int p = product(2,3);
    cout<<"The product is  \t"<<p<<endl;

    cout<<"----- Example 7: Calculate the Farenheit Temperature  -----"<<endl;
    double f = fah(12.5);
    cout<<"The Farenheit temperature is: "<<f<<endl;
    printfah(f);

     cout<<"----- Example 8: Check a number -----"<<endl;

     string checknum = checknumber(3);
     printnumber(checknum);

    cout<<"----- EXERCISE -----"<<endl;

    // Both Functions fully demonstrated
    int z = 8;
    bool numb = checkeven(z);
    
    printanswer(z, numb);

    // Exercise is complete
    
     return 0;








    return 0;
}

