/*
Alexander Urwand
Lab 11, Introduction to Functions 
*/
#include <iostream>
using namespace std;

// Create a void function (doesn't return any value)

void printhello(){
    cout<<"Hello function!"<<endl;
    return;
}

void greeting(string name){
    cout<<"Good afternoon "<<name<<endl;
    return;
}

// Example 3, function that returns an integer (whole number)
int returnfive(){


    return 5;
}

// Example 4, any code after the return will not be executed
// Return marks the end of the function
void printsome(){
    cout<<"Something"<<endl;
    return;
    cout<<"After the return"<<endl;
}

int somenumber (){
    int num = 10;
    return num;
    num *= 2;
    return num;


}

// Example 5, function that calculates and returns the area of a square

float areasquare(float side){
    float area = side*side;
    return area;
}

// Example 6, function that calculates and returns the product of two numbers

int product(int n1, int n2){
    return n1*n2;
}

// Example 7, function that calculates and returns farenheit temperature

double fah(double celsius){
    return celsius * 1.8 + 32;
}

void printfah(double f){
    cout<<"The Farenheit temperature is: "<<f<<endl;
}

// Example 8, check a number

string checknumber(int number){
    if(number == 0){
        return "zero";
    }
    else if(number>0){
        return "positive";
    }
    else{
        return "negative";
    }
}
void printnumber(string n){
    cout<<"The number is "<<n<<endl;
}

// Exercise Functions

// First function checking if given integer is even or not 
bool checkeven(int numb){
    if(numb % 2 == 0){
        return true;
    }
    else{
        return false;

    }
}

bool printanswer(int numb, bool){
    cout<<numb<<" being even is "<<printanswer(numb)<<endl;
    
}