/*1.WAP to create a class employee that stores the grade(A or B or C) and monthly salary of an employee.
  i)Overload the unary increment and decrement operator using member function and friend function respectively
  where the pre form of the unary operator is applied.
  ii)In the above example, perform the post decrement using friend function and pre increment using member function
  and display the values.
*/
#include <iostream>
using namespace std;

class employee{
    char grade;
    int monthly_sal;
    public:
    void get(){
        cout<<"Enter Grade of emp: ";
        cin>>grade;
        cout<<"Enter Monthly Salary of emp: ";
        cin>>monthly_sal;
    }
    void show(){
        cout<<"Grade of emp is "<<grade<<endl;
        cout<<"Monthly Salary is "<<monthly_sal<<endl;
    }
    void operator++(){
        ++monthly_sal;
    }
    friend void operator--(employee &k){
        --k.monthly_sal;
    }
    friend void operator--(employee &k, int l){
        k.monthly_sal--;
    }
};

int main()
{
    employee e1;
    e1.get();
    e1.show();
    ++e1;
    e1.show();
    --e1;
    e1.show();
    e1--;
    e1.show();
    return 0;
}