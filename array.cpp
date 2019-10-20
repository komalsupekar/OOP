/*Implement a class CppArray which is identical to a one-dimensional C++ array (i.e., the index
set is a set of consecutive integers starting at 0) except for the following :
1. It performs range checking.
2. It allows one to be assigned to another array through the use of the assignment
operator (e.g. cp1= cp2)
3. It supports a function that returns the size of the array.
4. It allows the reading or printing of array through the use of cout and cin.   */

#include<iostream>
#include<math.h>
using namespace std;

class array
{
     int a[10],b[10],i,j,temp,n;
     
    public:
            void accept();
            void display();
            void range();
            void sort();
            void exchange();
            int size();
};

void array::accept()
{
    cout<<"How many Elements you want to insert into the array=\n";
    cin>>n;
    cout<<"Enter the array Elements=\n";
    for(i=0;i<n;i++)
       {
            cout<<"a["<<i<<"]=";
            cin>>a[i];
        }
}

void array::display()
{
      cout<<"For Enter Array Elements are=\n";
       for(i=0;i<n;i++)
        {
            cout<<"a["<<i<<"]="<<a[i]<<"\n";
        }
}
 
void array::range()
{
      cout<<"The range of array is from"<<a[0]<<"to"<<a[n-1]<<endl;
}

void array::sort()
{
      for(i=0;i<n;i++)
      {
           for(j=0;j<n-1;j++)
           {
                if(a[j]>a[j+1])
                {    
                     temp=a[j];
                     a[j]=a[j+1];
                     a[j+1]=temp;
                }
           }
      }

    cout<<"\nThe Elements of Array After sorting";
     for(i=0;i<n;i++)
      {
          cout<<"a["<<i<<"]="<<a[i]<<"\n";
      }
}

void array::exchange()
{
     for(i=0;i<n;i++)
      {
           b[i]=a[i];
      }

    cout<<"\nThe array Elements Array exchanging=";
    for(i=0;i<n;i++)
      {
         cout<<"b["<<i<<"]="<<b[i]<<"\n";
      }
}    

int array::size()
{
     return n;
}

int main()
{
      int x;
      array obj;
      obj.accept();
      obj.display();
      obj.range();
      obj.sort();
      obj.exchange();
      x=obj.size();

  cout<<"\nThe size of Array="<<x;
  return 0;
}
