#include<iostream>
using namespace std;

template<typename T>
void input(T *a, int size)
{
    cout<<"\nEnter "<<size<<" elements in array\n";
    for(int i=0;i<size;i++)
    cin>>a[i];
}

template<typename T>
void sorting(T *a,int size)
{
int min;
for(int i=0;i<size;i++)
{
    min=i;
for(int j=i+1;j<size;j++)
{
    if(a[j]<a[min])
    min=j;
}
swap(a[i],a[min]);
}    
}

template<typename T>
void display(T *a, int size)
{
    for(int i=0;i<size;i++)
    cout<<a[i]<<"\t";
}

int main()
{
    cout<<"\nHow many elements you want to sort\n";
    int size;
    cin>>size;
if(size < 0)
    {
cout<<"Array size can not be negative. Initializing size to 1";
size=1;
    }
     int a[size];
    cout<<"\nEnter elements for integer array\n";
    input(a,size);
    cout<<"\n Integer array elements before sorting\n";
    display(a,size);
    cout<<"\nInteger array elements after sorting\n";
    sorting(a,size);
    display(a,size);
    
    float b[size];
    cout<<"\nEnter elements for float array\n";
    input(b,size);
    cout<<"\n Float array elements before sorting\n";
    display(b,size);
    cout<<"\nFloat array elements after sorting\n";
    sorting(b,size);
    display(b,size);
    cout<<"\n";
return 0;
}
