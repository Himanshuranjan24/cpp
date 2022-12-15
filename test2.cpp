/*Write a program to create a class “dollar” that stores the amount of rupees (in dollar) as its private data member. 
Create a class “rupee” that stores the amount of rupees (in INR ) as its private data member. Assign the dollar value to its
 respective rupees value using necessary conversion method( assume 1$ = 70 INR). After the assignment is completed, overload
  the multiplication (*) operator that modifies the percentage of change in INR(can increase or decrease than previous value) 
  by taking input from keyboard how much the value of INR to dollar has changed.*/

#include <iostream>
using namespace std;

class dollar
{
    float dol;
    public:
    dollar()
    {
        dol = 0;
    }
    dollar(float d)
    {
        dol = d;
    }
    void getdollar()
    {
        cout << "Enter the amount of dollar: ";
        cin >> dol;
    }
    void showdollar()
    {
        cout << "The amount of dollar is: " << dol << endl;
    }
    operator float()
    {
        return dol;
    }
};

class rupee
{
    float rup;
    public:
    rupee()
    {
        rup = 0;
    }
    rupee(float r)
    {
        rup = r;
    }
    void getrupee()
    {
        cout << "Enter the amount of rupee: ";
        cin >> rup;
    }
    void showrupee()
    {
        cout << "The amount of rupee is: " << rup << endl;
    }
    rupee operator*(float x)
    {
        rup = rup * x;
        return *this;
    }
};

int main()
{
    dollar d;
    rupee r;
    d.getdollar();
    r.getrupee();
    r = d * 70;
    r.showrupee();
    return 0;
}