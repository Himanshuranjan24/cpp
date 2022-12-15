/*Write a program to create a class “mark” that stores the average mark after taking input for two subjects. 
Overload the post increment operator using friend function that increments the subject marks and updates the average mark. 
If  any subject mark is already 100 then it must not be incremented and be managed with proper exception and accordingly average mark 
is updated.*/
#include <iostream>
using namespace std;

class mark
{
    float sub1, sub2, avg;
    public:
    mark()
    {
        sub1 = 0;
        sub2 = 0;
        avg = 0;
    }
    mark(float s1, float s2)
    {
        sub1 = s1;
        sub2 = s2;
        avg = (sub1 + sub2) / 2;
    }
    void getmark()
    {
        cout << "Enter the marks of subject 1: ";
        cin >> sub1;
        cout << "Enter the marks of subject 2: ";
        cin >> sub2;
        avg = (sub1 + sub2) / 2;
    }
    void showmark()
    {
        cout << "The marks of subject 1 is: " << sub1 << endl;
        cout << "The marks of subject 2 is: " << sub2 << endl;
        cout << "The average marks is: " << avg << endl;
    }
    friend mark operator++(mark &m, int);
};

mark operator++(mark &m, int)
{
    mark temp;
    temp.sub1 = m.sub1;
    temp.sub2 = m.sub2;
    temp.avg = m.avg;
    if(m.sub1 < 100)
    {
        m.sub1++;
    }
    if(m.sub2 < 100)
    {
        m.sub2++;
    }
    m.avg = (m.sub1 + m.sub2) / 2;
    return temp;
}

int main()
{
    mark m1;
    m1.getmark();
    m1.showmark();
    m1++;
    m1.showmark();
    return 0;
}