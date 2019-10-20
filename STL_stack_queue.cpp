//Write C++ program using STL for implementation of stack & queue using SLL

#include<iostream>
#include<iterator>
#include<list>

using namespace std;

class stack
{
	list <int> lst;
public:
	list<int>::iterator st,en;
	void push1(int a);
	void pop1();
	void display();
};
void stack::push1(int a)
{
	lst.push_back(a);
}
void stack::pop1()
{

	lst.pop_back();

}
void stack::display()
{
	st=lst.begin();
	en=lst.end();
	cout<<"\n~~~STACK~~~\n";
	while(st!=en)
	{

		en--;
		cout<<*en<<"\n";
	}
}
class queue{
	list <int> lst;
	public:
		list<int>::iterator st,en;
		void push1(int);
		void pop1();
		void display();
};
void queue::push1(int a){
	lst.push_back(a);
}
void queue::pop1(){
	lst.pop_front();
}
void queue::display(){
	st=lst.begin();
	en=lst.end();
	cout<<"\n~~~QUEUE~~~\n";
	while(st!=en)
	{

		en--;
		cout<<*en<<"\n";
	}
}
int main()
{
	stack s;
	queue q;
	int a,ch,soq;
	char choice;
	do{
	cout<<"\n1)Queue\n2)Stack\n3)Exit Program\n";
	cin>>ch;
	switch(ch)
	{
	case 1:

		do{
			cout<<"\n=======!!!!!!!!!..........QUEUE..........!!!!!!!!!=======\n";
			cout<<"\n1)Push to queue\n2)Pop from queue\n3)Display my queue\n4)Return to Main Menu\n";
			cin>>soq;
		switch(soq){
		case 1:
			cout<<"Enter Integer :";cin>>a;
			q.push1(a);
			cout<<"\n\n!!..Pushed..!!\n\n";
			choice='y';
			break;
		case 2:
			q.pop1();
			cout<<"\n\n!!..Popped..!!\n\n...New Queue is...\n";
			q.display();
			choice='y';
			break;
		case 3:
			q.display();
			choice='y';
			break;
		case 4:
			cout<<"Continue to Queue? y/n : ";cin>>choice;
			break;
		}

		}while(choice=='y');
	break;
	case 2:
		do{
		cout<<"\n=======!!!!!!!!!..........STACK..........!!!!!!!!!=======\n";
		cout<<"\n1)Push to Stack\n2)Pop from Stack\n3)Display my Stack\n4)Return to Main Menu\n";
		cin>>soq;

		switch(soq){
		case 1:
			cout<<"Enter Integer :";cin>>a;
			s.push1(a);
			cout<<"\n\n!!..Pushed..!!\n\n";
			choice='y';

		break;
		case 2:
			s.pop1();
			cout<<"\n\n!!..Poped..!!\n\n...New Stack is...\n";
			s.display();
			choice='y';

		break;
		case 3:
			s.display();
			choice='y';

			break;

		case 4:
			cout<<"Continue to Stack? y/n : ";cin>>choice;
			break;
		}

		}while(choice=='y');
	break;
	case 3:
		return 0;
	}
	}while(1);

}
