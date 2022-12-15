/* Q2) wap to create a class length that stores the length unit in feet and inches input the total length in inches at the time of 
creation of the object
 1)assign the length value of the respective object to a system defined unit that stores the length in feet and print the output
2)assign the total length unit that is store in a system defined varible to the object by using the necessary conversion funtion 
and display the length in feet and inches
 hint: add all the constructors and destructors*/
#include<iostream>
using namespace std;
class length{
    int feet;
    int inches;
    public:
    int reply(){
        return feet;
    }
    length(){
        int j;
        int count = 0;
        cout<<"Enter total length in inches: ";
        cin>>j;
        for(int i=j;i>=12;i = i-12){
            inches=i-12;
            count++;
        }
        feet = count;
    }
    //part b
    length(int k){
        int ft = 0;
        int inc = 0;
        for(int i = k;i>=12;i = i-12){
            inc = i - 12;
            ft++;
        }
        feet = ft;
        inches = inc;
    };

    //a part
    operator int(){
        int y = reply();
        return y;
    }
    void show(){
        cout<<"FEET : "<<feet<<" INCHES: "<<inches<<endl;
    }
};
int main(){
    length l1;
    l1.show();
    int f1 = l1;
    cout<<"F is assigned "<<f1<<endl;
    //b part
    int f2 = 37;
    length l2 = f2;
    l2.show();
    return 0;
};