#include <cstdlib> 
#include <iostream>
#include <string>
using namespace std;
class library{
	
};
class person{
	public:
	string name;
	string last_name;
	string phone_number;
	//double code;
	int nation_code;
	int day;
	int month;
	int year;
	//public:
	 virtual void input()=0;
	 virtual void output()=0;	
};
class Members:public person{
	public:
	int personal_code;
	void input(){
	cout <<"Enter your Name: "<<endl; cin>>name;
	cout <<"Enter your Last name: "<<endl; cin>>last_name;
	cout <<"Enter your Phone number: "<<endl; cin>>phone_number;
	cout <<"Enter your Registery date: "<<endl; cout<<"day//month//year"<<endl;	cin>>day>>month>>year;
	
	cout<<"Enter Nation Code"<<endl; cin>>nation_code;
	personal_code=rand();
	cout<<"personal code"<<personal_code<<endl;
	}	
	void output(){
		cout<< "Name:"<<name<<endl;
		cout<< "Last Name:"<<last_name<<endl;
		cout<< "Phone Number:"<<phone_number<<endl;
		cout<< "nation code ::"<< nation_code<<endl;
		cout<<"day//month//year"<<endl; cout<<day<<"/"<<month<<"/"<<year<<endl;
		cout<<"personal code :"<<personal_code<<endl;}
	
	
};
class Employee:public Members{
	public:
	double salary;
	void input(){
	cout <<"Enter your Name: "<<endl; cin>>name;
	cout <<"Enter your Last name: "<<endl; cin>>last_name;
	cout <<"Enter your Phone number: "<<endl; cin>>phone_number;
	cout <<"Enter your Registery date: "<<endl; cout<<"day//month//year"<<endl;	cin>>day>>month>>year;	
	cout<<"Enter Nation Code"<<endl; cin>>nation_code;
	personal_code=rand();
	cout<<"personal code"<<personal_code<<endl;
	cout<<"Enter salary :";  cin>>salary;
	}
	void output(){
		cout<< "Name:"<<name<<endl;
		cout<< "Last Name:"<<last_name<<endl;
		cout<< "Phone Number:"<<phone_number<<endl;
		cout<< "nation code ::"<< nation_code<<endl;
		cout<<"day//month//year"<<endl; cout<<day<<"/"<<month<<"/"<<year<<endl;
		cout<<"personal code :"<<personal_code<<endl;
		}
};
int main(){
	//person per;
	Members *mem;
	int num;
	cout<<"number of Members :"<<endl;
	cin>>num;
	mem=new Members[num];
	cout<<"number of Employee : "<<endl;
	cin>>num;
	Employee *emp=new Employee[num];;
	//emp=new Employee[num];
	
	//mem.input();
	//mem.output ();
	return 0;
}
