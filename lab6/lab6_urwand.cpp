/*
Alexander Urwand
Sept. 15, 2025
Lab 6, Nested Conditional Statement and Switch
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
    cout <<"\n----- Example 1: Nested Conditional Statement --------" << endl;

    int n = -8;
    if(n > 0){
        if(n%2==0){
            cout<<"The number is positive and even."<<endl;
        }
        else{
        cout<<"The number is positive and odd."<<endl;
        }
    }
    else if(n < 0){
        if(n%2==0){
            cout<<"The number is negative and even."<<endl;
        }
        else{
            cout<<"The number is negative and odd."<<endl;
        }

    }else{
        cout<<"The number is zero."<<endl;
    }

    cout <<"\n----- Example 2: Organize three numbers in decreasing order --------" << endl;
    // declare the identifiers (variable names)
    int num1, num2, num3;

    // display message and collect 3 numbers
    cout<<"Input three numbers: "<<endl;
    cin>>num1>>num2>>num3;

    //check if num1 is greater than num 2 and num 3

    if (num1 > num2 && num2 > num3){
        if(num2>num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    // check if num 2 is the greatest
    else if(num2>num1 && num2 > num3){
        if (num1>num3)
            cout<< num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }

    // check if num3 is the greatest
    else if(num3>num2 && num3>num1) {
        if(num1>num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }
    

    else{
        cout<<"All numbers are the same!"<<endl;
    }

    cout <<"\n----- Example 3: Switch --------" << endl;
    // select a day-off using switch-case statement
    int dayoff;
    cout<<"Select a day-off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;

    cin>>dayoff;

    switch (dayoff)
    {
        case 1:
            cout<<"You are off on Monday"<<endl;
            break;
        case 2:
            cout<<"You are off on Tuesday"<<endl;
            break;
        case 3:
            cout<<"You are off on Wednesday"<<endl;
            break;
        case 4:
            cout<<"You are off on Thursday"<<endl;
            break;
        case 5:
            cout<<"You are off on Friday"<<endl;
            break;
        default:
            cout<<"Unable to read the day-off"<<endl;
            break;

    }

    cout <<"\n----- Example 4: Switch to select a gender --------" << endl;
    char gender = ' ';
    cout<<"Select a gender: "<<endl;
    cout<<"m or M for male"<<endl;
    cout<<"f or F for female"<<endl;
    cout<<"o or O for other"<<endl;
    cin>>gender;

    switch (gender)
    {
    case'm': case 'M':
        cout<<"Gender = Male"<<endl;
        break;
    case'f': case 'F':
        cout<<"Gender = Female"<<endl;
        break;
    case'o': case 'O':
        cout<<"Gender = Other"<<endl;
        break;
    default:
        cout<<"Gender = Undefined"<<endl;
        break;
    }

    cout <<"\n----- Exercise --------" << endl;

    int money;
    cout<<"How much money do you have?(Don't include $ or commas)"<<endl;
    cin>>money;

    if (0 <= money && money <= 199999){
        cout<<"Keep saving!"<<endl;
    }
    else if (200000 <= money && money <= 500000){
        cout<<"Apartment or co-op"<<endl;
        if(200000 <= money && money <= 300000)
            cout<<"Studio"<<endl;
        else if (300001 <= money && money <= 400000)
            cout<< "1BR + 1 Bath"<<endl;
        else if (400001 <= money && money <= 500000)
            cout<< "2 BRs + 1 Bath"<<endl;
    }
       

    
    else if (500001 <= money && money <= 1000000){
        cout<<"House"<<endl;
        if(500001 <= money && money <= 700000)
            cout<<"2 BRs + 2 Baths"<<endl;
        else if (700001 <= money && money <= 1000000)
            cout<< "3 BRs + 3 Baths"<<endl;
    }

    else if (1000001 <= money && money >= 1000001){
        cout<<"Mansion"<<endl;
    }
    else if (money < 0){
        cout << "Have some savings!"<<endl;
    }




    return 0;
}