/* 
Write a menu driven program that will create a data file containing the list of telephone
numbers in the following form
John 23456
Ahmed 9876
........... .........
Use a class object to store each set of data, access the file created and implement the following
tasks
I. Determine the telephone number of specified person
II. Determine the name if telephone number is known
III. Update the telephone number, whenever there is a change.  
*/


#include<iostream>
#include<fstream>
#include <cstring>

using namespace std;

class Person{
public:
	char *name;
	unsigned int no;

	void get_data();
	void Display();
	Person(){
		name=new char(1);
		name[0]='\0';
		no=0;
	}
};

void Person::get_data(){
	cout<<"Enter Name:       ";
	cin>>name;
	cout<<"Enter Mobile No.: ";
	cin>>no;
}
void Person::Display(){
	cout<<"Name       : "<<name<<endl;
	cout<<"Mobile No. : "<<no<<endl;
}

int main(){


	int ch,n,i=0;
	char choice;
	bool f;
	Person P[5];
	Person Pr[5];
	fstream file("phdir",ios::out|ios::in);


	char *name1;
	name1=new char(1);
	name1[0]='\0';



	cout<<"How many Entries ? ";
	cin>>n;

	for(int i=0;i<n;i++){
	Pr[i].get_data();
	file.write((char*)&Pr[i],sizeof(Person));
	}
	file.close();




	do{

	cout<<"\n1.Display\n2.Find Name\n3.Find Telephone No.\n4.Update Telephone No.\n";
		cin>>ch;
		switch(ch){


		case 1:
		file.open("phdir",ios::in);
		file.seekg(0);
		for(int k=0;k<n;k++){
		file.read((char*)&Pr[k],sizeof(Person));
		Pr[k].Display();
		}

		file.close();

		break;

		case 2:
		int no1;
		f=false;
		file.open("phdir");
		cout<<"\n\nEnter Telephone No. : ";
		cin>>no1;
		while(!file.eof()){
		file.read((char*)&Pr[i],sizeof(Person));
			if(Pr[i].no==no1){
			cout<<"\n\n!!!Found!!!\n\n";
			Pr[i].Display();
			f=true; 
			break;
			}
		i++;
		}
		if(f==false)
		cout<<"\n\n!!!......Not Found :( :( !!!\n\n";
                file.close();
		break;

		case 3:

		f=false;
		i=0;
		file.open("phdir");
		cout<<"\n\nEnter Name : ";
		cin>>name1;
		file.seekg(0);

		while(!file.eof()){
		file.read((char*)&Pr[i],sizeof(Person));

			if(!strcmp(Pr[i].name,name1)){
			cout<<"\n\n!!!Found!!!\n\n";
			Pr[i].Display();
			f=true;
			break;
			}
		i++;
		}

		if(f==false)
		cout<<"\n\n!!!......Not Found :( :( !!!\n\n";
		file.close();
		break;


		case 4:

		f=false;
		i=0;
		int j;
		file.open("phdir",ios::in|ios::out);
		cout<<"\n\nEnter Name of Person whose no. u want to change : ";
		cin>>name1;
		file.seekg(0);

		while(!file.eof()){
		int pos=file.tellg();
		file.read((char*)&Pr[i],sizeof(Person));

			if(!strcmp(Pr[i].name,name1)){

			cout<<"\n\n!!!Found!!!\n\n";
			Pr[i].Display();

			f=true;
			cout<<"\n\nEnter New Telephone No. : ";
			cin>>no1;
			P[i].no=no1;
			file.seekg(pos);
			file.write((char *)&P[i],sizeof(Person));
			cout<<"\n\n!!!...Telephone no. is changed successfully...!!!  ;) ;) \n\n";
			break;

			}
		i++;
		}



		if(f==false)
		cout<<"\n\n!!!......Not Found :( :( !!!\n\n";



		file.close();

		break;


		}
		cout<<"\n\nDo You Want to Continue? y/n\n";
		cin>>choice;
		/*if(!cin.good()){
			cout<<"fdsdfg";
			cin.ignore();
			cin.clear();
			cin>>choice;
		}*/
	}while(choice=='y');
return 0;
}
