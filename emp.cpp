#include<iostream>
#include<stdlib.h>
using namespace std;

class Personal{
 private:
      string name,address,gender;
      int contact;
public:
        Personal()
        {
                name="";
                address="";
                gender="";
                contact=-1;
        }

         void getData()
        {
        cout<<"\n********** Enter your personal details************";
 cout<<"\nEnter your  name:";
         cin>>name;
         cout<<"\nEnter gender:";
         cin>>gender;
         cout<<"\nEnter address:";
         cin>>address;
         cout<<"\nEnter contact number:";
         cin>>contact;
}
void putData()
{
        cout<<"\n your Personal Details are:- ";
        cout<<"\n\nName of the Student is:\t"<<name;
        cout<<"\nGender of the Student is:\t"<<gender;
        cout<<"\nAddress of the Student is:\t"<<address;
        cout<<"\nContact number of the Student is:\t"<<contact;
}
};

class Professional
{
 private:
string os,pl;
         string classname;
public:
        Professional()
        {
                os="";
                pl="";
                classname="";
        }
        void getData()
        {
                cout<<"\n\nEnter your Professional Deatails: ";
                cout<<"\n\nEnter name of the class: ";
                cin>>classname;
                cout<<"\nEnter which operating system do you know?:  ";
                cin>>os;
                cout<<"\nEnter which progrmming language do u know?:  ";
                cin>>pl;
        }
        void putData()
        {
                cout<<"\n your Professional Details are:- \n ";
  cout<<"\n\n Name of the Class is:\t"<<classname;
                cout<<"\n known OS is:\t"<<os;
                cout<<"\n known Programming language is:\t"<<pl;
        }
};

class Academic
{
private:
        float ten,twe,fe,se;
public:
        Academic()
        {
                ten=-1;
                twe=-1;
                fe=-1;
                se=-1;
        }
void getData()
{
        cout<<"\nEnter 10th,12th,F.E,S.E Percent: \n";
        cin>>ten>>twe>>fe>>se;
}
void putData()
{
        cout<<"\n\n Your Academic Details are:- ";
        cout<<"\n 10th marks are"<<ten;
        cout<<"\n 12th marks are"<<twe;
        cout<<"\n FE marks are"<<fe;
        cout<<"\n SE marks are"<<se;
}
};

class CV:public Personal,public Professional,public Academic
{
private:
        string title;
public:
        CV():Personal(),Professional(),Academic()

        {
                title="";
        }
        void getData()
  {
                Personal::getData();
                Professional::getData();
                Academic::getData();
                cout<<"\nEnter title for Resume";
                cin>>title;
        }
        void putData()
        {
                cout<<"\n**********"<<title<<"**************\n";
                Personal::putData();
                Professional::putData();
                Academic::putData();
        }
};

int main()
{

        CV c1;
        c1.getData();
     c1.putData();
return 0;
}
