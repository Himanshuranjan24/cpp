/*3.WAP to overload the assignment operator to assign the properties of one object to another. Also, add the constructors and destructors 
to verify the respective invocation.*/
#include <iostream>
using namespace std;
class abc{
    int a;
    float b;
    public:
    abc(){
        cout<<"Zero Arg constructor"<<endl;
        cout<<"Enter A value: ";
        cin>>a;
        cout<<"Enter B value: ";
        cin>>b;
    }
    abc(int x, float y){
        cout<<"Parameterized constructor"<<endl;
        a = x;
        b = y;
    }
    abc(abc &k){
        cout<<"Copy constructor"<<endl;
        a = k.a;
        b = k.b;
    }
    void operator=(abc &k){
        cout<<"Assignment Operator"<<endl;
        a = k.a;
        b = k.b;
    }
    void show(){
        cout<<"A value "<<a<<endl;
        cout<<"B value "<<b<<endl;
    }
    ~abc(){
        cout<<"Destructor"<<endl;
    }
};
int main()
{
    abc a1, a2;
    a2=a1;
    a2.show();
    abc a3(a2), a4(5, 2.5);
    a3.show();
    a4.show();
    return 0;
}