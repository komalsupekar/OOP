/*
Implement a class Complex which represents the Complex Number data type. Implement the
following operations:
1. Constructor (including a default constructor which creates the complex number 0+0i).
2.Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.  */

#include<iostream>
using namespace std;
class Complex
{
    float real,img;
public:
//Constructor
Complex()
{
    real=0;
    img=0;
}
Complex(float a,float b)
{
    real=a;
    img=b;
}
//Addition of two complex numbers
Complex operator+(Complex c1)
{
    Complex temp;
    temp.real=real+c1.real;
    temp.img=img+c1.img;
    return temp;
}
//Subtraction of two complex numbers
Complex operator-(Complex c1)
{
    Complex temp;
    temp.real=real-c1.real;
    temp.img=img-c1.img;
    return temp;
}
//Multiplication of two complex numbers
Complex operator*(Complex c1)
{
    Complex temp;
    temp.real=(real*c1.real)-(img*c1.img);
    temp.img=(img*c1.real)+(real*c1.img);
    return temp;
}
//Division of two complex numbers
Complex operator/(Complex c1)
{
    Complex temp,c2;
    c2.img=-c1.img;
    float x;
    temp.real=(real*c1.real)-(img*(c2.img));
    temp.img=(real*c1.real)+(real*(c2.img));
    x=(c1.real)*(c1.real)+(c1.img)*(c1.img);
    temp.real=temp.real/x;
    temp.img=temp.img/x;
    return temp;
}
//overloaded insertion (<<) opertor for class Complex
    friend ostream &operator<<(ostream &out, Complex &c)
    {
       out << c.real<<" + "<< c.img<<" i";;
        return out;
    }

//overloaded extraction (>>) opertor for class Complex

    friend istream &operator>>(istream &in, Complex &c)
    {
        in>> c.real>>c.img;
        return in;
    }

};


int main()
{
Complex c1,c2,c3;
int choice;
char ans;
do
{
cout<<"\n************* MENU ************\n";
cout<<"\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division";
cout<<"\n\nEnter your choice: ";
cin>>choice;
cout<< "Enter real and img part of first complex number\n";
cin>>c1;
cout<< "Enter real and img part of second complex number\n";
cin>>c2;
switch(choice)
{
case 1:
    c3=c1+c2;
    cout<<"\n\nAddition is: ";
    cout<<c3;
break;
case 2:
    c3=c1-c2;
    cout<<"\n\nSubtraction is: ";
    cout<<c3;
break;
case 3:
    c3=c1*c2;
    cout<<"\n\nMultiplication is: ";
    cout<<c3;
break;
case 4:
    c3=c1/c2;
    cout<<"\n\nDivision is: ";
    cout<<c3;
break;
default:    
    cout<<"\nWrong choice";
}
    cout<<"\nDo you want to continue?(y/n): ";
    cin>>ans;
    }while(ans=='y' || ans=='Y');
return 0;
}
