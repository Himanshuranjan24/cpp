/*2.WAP to create a class student having name, age, roll number and average mark as its member. Input the details from keyboard
and display the details to monitor by overloading the extraction and insertion operator.*/
#include <iostream>
using namespace std;

class student{
    string name;
    int age;
    int roll;
    float avg;
    public:
    friend istream& operator>>(istream &k, student &l){
        cout<<"Enter Name: ";
        k>>l.name;
        cout<<"Enter Age: ";
        k>>l.age;
        cout<<"Enter Roll No: ";
        k>>l.roll;
        cout<<"Enter Average marks: ";
        k>>l.avg;
        return k;
    }
    friend ostream& operator<<(ostream &k, student &l){
        k<<"Name is "<<l.name<<endl;
        k<<"Age is "<<l.age<<endl;
        k<<"Roll No is "<<l.roll<<endl;
        k<<"Average Mark is "<<l.avg<<endl;
        return k;
    }
};
int main()
{
    student s1;
    cin>>s1;
    cout<<s1;
    return 0;
}