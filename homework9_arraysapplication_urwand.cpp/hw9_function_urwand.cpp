/*
Alexander Urwand
Dec 1, 2025
HW 9, Array Application
*/

#include <iostream>
using namespace std;

int arraysize(){
    int size;
    do {
        cout << "Enter an array size: " << endl;
        cin >> size;
        
    }
    while (size < 1 || size > 100);
    return size;
}

void randPopulate(int noise[], int size) {
    for( int i =0; i < size; i++){
        noise[i] = rand() % (30 - 10 + 1) + 10;
    }
}

void print(int noise[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<noise[i] << " " ;
    }
    cout<<endl;
}

void reverse(int noise[], int size) {
    for(int i = 0; i < size / 2; i++) {
        int temp = noise[i];
        noise[i] = noise[ size - 1 - i];
        noise[size - 1 - i] = temp;
    }

}