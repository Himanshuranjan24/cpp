/*5.Write a program in C++ to create overloaded function interest to compute simple interest
and compound interest.*/

#include <iostream>
#include <math.h>
using namespace std;

float interest(int p, int t, float r);
double interest(int p, float r, int t);
int main()
{
    int principal{},time{};
    float rate{};
    cout << "Enter the principal amount : " << endl;
    cin >> principal;
    cout << "Enter the rate of interest : " << endl;
    cin >> rate;
    cout << "Enter the time in years : " << endl;
    cin >> time;
    float si=interest(principal, time, rate);
    double ci=interest(principal, rate, time);
    cout << "\n\n";
    cout << "Simple interest = " << si << endl;
    cout << "Compound interest = " << ci << endl;
    cout << "\n\n";
    return 0;
}
float interest(int p, int t, float r)
{
    return (p*r*t)/100;
}
double interest(int p, float r, int t)
{
    double a{};
    a=(1+r/100);
    a=pow(a,t);
    a*=p;
    a-=p;
    return a;
}
