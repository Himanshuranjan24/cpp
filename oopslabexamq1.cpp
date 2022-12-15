/* Write a program in C++ to read the contents of a file from jth position to ith position where j > i and store the content
 to a binary file. */
 #include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of characters in the string : ";
    cin >> n;
    cin.ignore(2,'\n');
    char name[30];
    cout << "Enter full name : ";
    cin.getline(name,n+1);
    cout << "Name entered is :" << endl;
    cout << name;
    ofstream out("xyz.txt");
    out << name;
    out.close();
    int i,j;
    char ch;
    cout << "\nEnter the value of i & j respectively : " << endl;
    cin >> i >> j;
    ifstream in("xyz.txt");
    in.seekg(i-1,ios::beg);
    for(int k=i-1; k<=j-1; k++)
    {
        in.get(ch);
        cout << ch << " ";
    }
    return 0;
}

