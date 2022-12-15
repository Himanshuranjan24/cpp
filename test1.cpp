/* Write a program to create a class book that stores the details of a book like author name,book name,year of publication,
 number of pages. Input the details for two books at the time of creation by using class template concept and display by
 calling necessary member function. Also store the details to a file and read again from the file for any one book.*/


#include<iostream>
using namespace std;

template<class T>

class book
{
    T author,book_name,year_of_publication,number_of_pages;
    public:
    book(T a,T b,T c,T d)
    {
        author=a;
        book_name=b;
        year_of_publication=c;
        number_of_pages=d;
    }
    void display()
    {
        cout<<"Author name: "<<author<<endl;
        cout<<"Book name: "<<book_name<<endl;
        cout<<"Year of publication: "<<year_of_publication<<endl;
        cout<<"Number of pages: "<<number_of_pages<<endl;
    }
};

int main()
{
    book<string> b1(" Alain Mabanckou","Broken Glass","2005","173");
    book<string> b2("Antoine Wilson","mouth to mouth","2022","183");
    b1.display();
    b2.display();
    return 0;
}