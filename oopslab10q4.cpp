/* Q4) using necessary conversion function assigne the name of the employee to a system defined and display it*/
#include <iostream>
using namespace std;

class employee
{
    char *name;
    public:
    employee()
	{
        name = new char(10);
        cout<<"Enter the name of the employee : ";
        cin>>name;
    }
    operator char*()
	{
        return name;
    }
};

int main()
{
    employee e;
    string x;
    x=e;
    cout<<"Name of the employee is "<<x;
}
