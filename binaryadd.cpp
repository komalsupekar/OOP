//Write C++ program using STL to add binary numbers (assume one bit as one number), use STL stack.

#include<iostream>
#include<stack>
using namespace std;
 
        /* READ BINARY NUMBER */
stack<int> read()
  {
    stack<int> s;
    int x,n,i;
 
    cout<<"\nEnter the no. of bits in the no. :";
    cin>>n;
    cout<<"\nEnter the binary number : ";
 
    for(i=0;i<n;i++)
      {
    cin>>x;
    s.push(x);
      }
    return s;
  }
        /* DISPLAY  FUNCTION */
 
void display(stack<int> &s)
  {
    cout<<"  ";
    while(!s.empty())
      {
    cout<<s.top()<<" ";
    s.pop();
      }
  }
        /* ADDITION OF TWO BINARY NOS.*/
stack<int> add(stack<int> &s1,stack<int> &s2)
  {
    stack<int> s;
    int sum,carry=0,b1,b2;
 
    while(!s1.empty()||!s2.empty())
      {
    b1=b2=0;
    if(!s1.empty())
      {
        b1=s1.top();
      s1.pop();
    }
    if(!s2.empty())
      {
        b2=s2.top();
        s2.pop();
         
      }
    sum=(b1+b2+carry)%2;
    carry=(b1+b2+carry)/2;
    s.push(sum);
      }
    if(carry==1)
      s.push(1);
    return s;
  }
 
        /* MAIN FUNCTION*/
 
int main()
  {
    stack<int> s1,s2,s3;
    int ch;
 
    cout<<"\n\t\t\t***MENU***\n";
    cout<<"\n1........Read first number"
    <<"\n2........Read second number"
    <<"\n3........Display addtion of two numbers"
    <<"\n4........Exit";
 
    do
      {
    cout<<"\nEnter your choice..: ";
    cin>>ch;
 
    switch(ch)
      {
        case 1:
           s1=read();
           break;
 
        case 2:
           s2=read();
           break;
 
        case 3:
           cout<<"\nThe result of addition is :";
           s3=add(s1,s2);
           display(s3);
           break;
      }
      }while(ch!=4);
    return 0;
  }
