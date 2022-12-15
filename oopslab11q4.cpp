/*q4)wap to take input content from the keyboard , store to file and print ith character to jth character .
(i and j are keyboard input where i<j)*/
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
