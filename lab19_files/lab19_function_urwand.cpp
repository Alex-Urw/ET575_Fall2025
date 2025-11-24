/*
Alexander Urwand
Nov 24, 2025
Lab 19, files and console input
*/
#include <iostream>
#include <fstream>
using namespace std;

// Example 1: console input failure
// function to check if num values is the proper data type
void checknumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

//if only one line, {} are optional. I put it anyway.
//Must clear fail state to reset the flag
    if(cin.fail()){
        cout<<"Error! Input dismatched data type!"<<endl;
        num = -1;
    }
    else{
        cout<<"Entered number = "<<num<<endl;
    }
    //clear the cin state
    //ignores up to 10000 characters or stop earlier if it detects a new line
    cin.clear();
    cin.ignore(10000,'\n');

    cout<<"END OF FUNCTION. Number = "<<num<<endl;}

    // example 2: console input to validate an input data type
    // loops until valid input is inputted
    float validatenumber(){
        float n;
        bool isNotValid = false;

        do{
            cout<<"Enter a number: ";
            cin>>n;
            isNotValid = cin.fail();
            cin.clear();
            cin.ignore(10000, '\n');

        }
        while(isNotValid);

        return n;
    }

//example 3: set object for input and output files
ifstream fin; 
//input file "fin"
ofstream fout;
//output ffile stream "fout"


// function to read sample file
void readfile(){
    //open the file
    fin.open("samplefile.txt");
    //declare a variable 'line' to store each line of the sample file
    string line;
    //use a loop to loop through the file
    //start with line counter, = 1 cause it starts w/ first line
    int linecounter = 1;

    //while loop with getline method to get line of each file
    while(getline(fin,line)){
        cout<<"Line "<<linecounter<<"\t"<<line<<endl;
        linecounter ++;
    }
    //save those lines in variable 'line'
    //increase the line counter, line counter moves on to next line when incrementing by 1

    // after while loop you need to close the file
    //fin opens the file, fout will close it
    fin.close();
}

// example 4: Writing a file
// fout allows us to write an output in new or existing file
// if filename doesnt exist it creates a new file
// if file name does exist, it overwrites everything in the file

void writefile(string filename){
    fout.open(filename);

    //cout console out in terminal
    //fout doesnt write through terminal, writes in the file

    // write some content

    
    for(int n = 1; n<=3; n++){
        fout<<"Good morning "<<n<<endl;
    }

    //close the file otherwise it will remain open
    fout.close();
}

// example 5: append data into a file
void appendfile(string filename){
    // ios:: is optional
    fout.open(filename, ios::app);

    // append
    fout<<"\n ----- APPEND -----"<<endl;
    for(int n = 3; n > 0; n --){

        fout<<n<<endl;
    }
    //write a single line
    fout<<"GAME OVER!"<<endl;

    // close file
    fout.close();
}

// EXERCISE

//creating my function
void datafile(string filename){
    fout.open(filename);

    fout<<"This is my output file - Alexander Urwand\n"<<endl;

    fout.close();
}

// append function
void appendDataFile(string filename, string message){
    fout.open(filename, ios::app);
    fout<<message<<endl;
    fout.close();
}

// reading function

void readingDataFile(){
    fin.open("data_user.txt");
    string dataline;

    while(getline(fin, dataline)){
        cout<<dataline<<"\t"<<endl;
    }
}
