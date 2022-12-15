/*q3)wap to find the number of characters present (lenght) of file, number of words,and number of sentences present in the file.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in("abcd.txt");
    in.seekg(0,ios::end);
    int len = in.tellg();
    cout << "Total no. of chracters : " << len << endl;
    int words=1,sen=1;
    char ch;
    in.seekg(0,ios::beg);
    while(in)
    {
        in.get(ch);
        if(ch == ' ' || ch == '.')
        words++;
        if(ch == '.')
        sen++;
    }
    cout << "Words : " << words << endl;
    cout << "Sentence : " << sen << endl;
    return 0;
}