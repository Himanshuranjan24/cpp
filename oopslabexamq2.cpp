 /*4. Write a program to create a class “bank” that is having a member function that 
calculates simple interest on inputs of principal amount,number of years and rate of 
interest where rate of interest is default value as 8.5%. However the bank manager can 
increase the rate of interest by overloading binary plus (+) operator to update the value 
for a respective customer. The manager must also get notification if rate of interest is 
reduced and must manage with proper exception.*/

#include <iostream>
using namespace std;

class bank
{
    int years;
    float principal, rate;
    double si;
    public :
    void get()
    {
        cout << "Enter principal amount : ";
        cin >> principal;
        cout << "Enter the number of years : ";
        cin >> years;
        rate = 8.5;
        si = 0;
    }
    void calculate_si()
    {
        si = principal*years*rate/100;
    }
    void show()
    {
        cout << "Simple Interest is : " << si << endl;
    }
    void operator+(float k)
    {
        rate += k;
        try
        {
            if(rate < 8.5)
                throw 0;
        }
        catch(int k)
        {
            cout << "Rate of interest is reduced." << endl;
        }
    }
};

int main()
{
    bank a;
    a.get();
    a.calculate_si();
    a.show();
    a+5;
    a.calculate_si();
    a.show();
    return 0;
}