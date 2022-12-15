/*4.WAP to create a function template to swap two numbers.*/


#include<iostream>
using namespace std;
template<class T>

void swap1(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;

    // using XOR
}
int main(){
    int x, y;
    cout<<"ENter A and B\n";
    cin>>x>>y;
    swap1(x,y);
    cout<<x<<"\t"<<y;
    return 0;
}