/*1.WAP to copy the contents of one file to another file in reverse order.*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in;
    in.open("Q1a.txt");
    ofstream out;
    out.open("Q1b.txt");

    in.seekg(0,ios::end);
    int k = in.tellg();
    char ch;
    for(int i = 1; i<=k; i++){
        in.seekg(-i,ios::end);
        in.get(ch);
        out<<ch;
    }
    return 0;
}