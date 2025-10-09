/*
Alexander Urwand 
October 8, 2025
lab 8, for loops
*/
#include <iostream>
#include <string>
using namespace std;

int main () {
    // In C++ there are 3 loop statements: for statement, while statement, and do-while statements.
    cout<<"\n----- Example 1: For Loop -----"<<endl;
    
    // This loop will print "hello" 5 times.
    // ++ increases the value by 1.
    // Can declare inital value variable inside or outside of for loop
    for(int action = 1; action <= 5; action++) {
        cout << "Hello "<<action<<endl;
    }

    cout<<"\n----- Example 2: For Loop as a Decrement Counter -----"<<endl;
    // Print from 9 to 1
    // -- subtracts 1 fromt the current value
    int n = 9;
    for(n; n >= 1; n--) {
        cout << n << "\t";
    }

    cout<<"\n----- Example 3: For Loop as an Increment Counter With Different Steps -----"<<endl;
    // Print from 1 to 20 in a step of 3.
    // += increases value in increments of the number following
    for ( int m = 1; m <= 20; m += 3) {
        cout << m << "\t" << endl;
    }

    cout<<"\n----- Example 4: For Loop with Conditional Statements -----"<<endl;
    // Print all numbers, between -10 and 10, that are multiples of 3
    for(int p = -10; p <= 10; p++) {
        if (p % 3 == 0 && p != 0){
            cout<<p<<"\t";
        }
    }

    cout<<"\n----- Example 5: For Loop With Conditional Statements -----"<<endl;
    // Count all even numbers between 5 and 20.
    int even_count = 0;
    for(int p = 5; p <=20; p++){
        if(p % 2 == 0 && p != 0) {
            even_count ++;
        }
    }
    //Print result
    cout << "There is/are " << even_count << "even number/s." << endl;

    cout<<"\n----- Example 6: For Loop With Counditional Statements -----"<<endl;
    // Add all negative numbers between -8 and 5.
    // If you initialize a variable outside a forloop, it applies to the entire code.
    // If you initialize a variable inside the for loop, it only applies in the for loop.

    int sum_negative = 0; 
    int x = -8;
    for(x; x <= 5; x++ ) {
        if(x < 0) {
            sum_negative += x;
        }
    }
    // Print results.
    cout << "The total sum of negative numbers = " << sum_negative << endl;

    cout<<"\n----- EXCERSISE 1 -----"<<endl;
    // Below I declare n as the value I begin counting down from.
    // I also declare a counter variable at 0 which will serve the function of counting multiples of 2 within decrements.
    n = 21;
    int multiple_count = 0;

    // Here I create a for loop explaining that it relates to n as long as n is greater or equal to -21 ( my cutoff number) and that it will decrease by decrements of 5.

    for(n; n >= -21; n -= 5 ) {
    // Here I create a conditional if statement for my counter variable.
    // It explains that if n divided by 2 has a remainder of 0 (is a multiple of 2) and n is not 0, the counter variable will increase incrementally by 1.
    // Put simply, whenever n shows up as a multiple of 2 not including 0, the counter will go up by 1.
        if(n % 2 == 0 && n != 0) {
            multiple_count++;
        }
        // Below I print out n which displays n gradually decreasing by decrements of 5 from 21 to -21.
        cout << n << endl;
    }

    // Here I print out a statement inserting my counter variable, displaying how many multiples of 2 show up.
     cout << "\nThere are " << multiple_count << " times the loop counter shows multiples of 2."<<endl;

     // Exercise 1 is complete.

    cout<<"\n----- EXCERSISE 2 -----"<<endl;
    // I start by declaring the user input variable equaling 0.
    // I print a sentence that will prompt the user to enter an initial value.
    // Under that, I allow for that inputed number to be stored as the user input variable.
    int user_input = 0;
    cout<<"Enter an initial value: " << endl;
    cin>>user_input;

    // Below I write my for loop
    // For the variable user_input, as long as that integer is <= 30, the integer will increase by 4 up to 30.


    for(user_input; user_input <= 30; user_input += 4) {
    // Here, I use an if statement saying that if the inputted value is larger than 30 it will print an invalid message.
    // I put a break to stop it from continuously looping if that condition is met.
    // I'm not sure why but my cout message won't print and I'm not sure how to solve it.
        if(user_input > 30) {
            cout << "That is not a valid entry." << endl;
        break;
        }

        // Here, I use an else if statement saying if the first condition above isn't met, verify that the integer is <= 30 and if so, print it out.
        // When doing so, it gradually increases in increments of 4 and stops at 30.
        else if (user_input <= 30) {
        cout << user_input << endl;
        }

        // Exercise 2 is complete.

    }
   // cout << user_input<< endl;

    



    return 0;
}