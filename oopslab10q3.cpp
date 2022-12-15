/* Q3) wap to create a class employee that stores the name basic salary and the grade of an employee overload the new operator to 
alllocate memory
and then stores the value and also overload the delete operator to deallocate the memory and also add user defined constructor 
and destructor in the program*/
#include<iostream>
using namespace std;
class employee{
    string name;
    int basic_sal;
    char grade;
    public:
    employee(){cout<<"zero args constructor"<<endl;}
    employee(int k){cout<<"parameterized constructor"<<endl;}
    // employee(employee &y){cout<<"copy constructor"<<endl;}
    ~employee(){cout<<"Destroyed"<<endl;}
    string reply(){
        return name;
    }
    operator string(){
        string y = reply();
        return y;
    }
    void get(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter basic salary: ";
        cin>>basic_sal;
        cout<<"Enter Grade(A/B/C): ";
        cin>>grade;
    }
    void *operator new(size_t size){
        cout<<"Memory allocated"<<endl;
        // void *p = malloc(size);
        void *p = ::operator new(size);
        return p;
    }
    void operator delete(void *osama){
        free(osama);
        cout<<"Deleted"<<endl;
    }
    void show(){
        cout<<"NAME: "<<name<<endl;
        cout<<"BASIC SALARY: "<<basic_sal<<endl;
        cout<<"GRADE: "<<grade<<endl;
    }
};
int main(){
    employee *emp1 = new employee;
    emp1->get();
    emp1->show();
    delete emp1;
    employee emp2;
    emp2.get();
    string nm = emp2;
    cout<<"nm is assigned "<<nm<<endl;
    return 0;
}