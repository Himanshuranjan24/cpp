/*3. WAP to create a class employee that is having name, age, grade, employee code and monthly salary of an employee.
Input the details from keyboard and assign using necessary member function.
Store the details of employee 1 to a file and then read those details to another employee(2) and print the details to output 
screen by calling member function.*/
#include<iostream>
#include<fstream>
using namespace std;
class employee{
    string name;
    int age;
    char grade;
    int employee_no;
    int monthly_sal;
    public:
    void get(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter grade: ";
        cin>>grade;
        cout<<"Enter employee no: ";
        cin>>employee_no;
        cout<<"Enter monthly salary: ";
        cin>>monthly_sal;
    }
    void show(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"grade: "<<grade<<endl;
        cout<<"employee no: "<<employee_no<<endl;
        cout<<"monthly salary: "<<monthly_sal<<endl;

    }
};
int main(){
    employee e1,e2;
    e1.get();
    ofstream out;
    out.open("Q3a.bin");
    out.write((char *)&e1,sizeof(e1));
    out.close();
    ifstream in;
    in.open("Q3a.bin");
    in.read((char *)&e2, sizeof(e2));
    e2.show();
    return 0;
}