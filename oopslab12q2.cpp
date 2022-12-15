/*2.WAP to create a file which stores the first name of the student entered by the user by keyboard.
Input the sir name from keyboard and also append to the existing content of the file.
Then read the full name of the student from file and print to output screen.( should be space bw first and sir name).
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    string name;
    ofstream out;
    out.open("Q2.txt");
    cout<<"Enter your 1st name: ";
    cin>>name;
    out<<name;
    out<<" ";
    out.close();

    //append
    // ofstream out;
    out.open("Q2.txt",ios::app);
    string name2;
    cout<<"Enter your surname: ";
    cin>>name2;
    out<<name2;
    return 0;
}