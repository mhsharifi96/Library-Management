#include <cstdlib> 
#include <iostream>
#include <string>
using namespace std;
class MemCG{
	public:
	static int BooksNumbers;
	static int NewspapersNumbers;
	static int MagazinesNumbers;
	virtual void InputBooks();
	virtual void ShowAll();
};
class Books: public MemCG{
	string BookName;
	long int BookId;
	string BookWriter;
	int BookNumber=0;
	Books *book;
	Books *bookCopy;
	public:
	void InputBooks(){
		cout<<"Enter How many Book Details you want enter:";
		cin>>BooksNumbers;
		book = new Books[BooksNumbers];
		for(int i=0;i<BooksNumbers;i++){
			cout<<"Enter Name of Book ["<<i<<"] : ";
			cin>>book->BookName;
			cout<<"Enter Id of Book ["<<i<<"] : ";
			cin>>book->BookId;
			cout<<"Enter Name of BookWriter ["<<i<<"] : ";
			cin>>book->BookWriter;
		}
	}
	void ShowAll(){
		for(int i=0;i<BooksNumbers;i++){
			cout<<"Name of Book ["<<i<<"] : "<<book->BookName<<endl;
			cout<<"Id of Book ["<<i<<"] : "<<book->BookId<<endl;
			cout<<"Name of BookWriter ["<<i<<"] : "<<book->BookWriter<<endl;
		}
	}
	void AddBook(){
		bookCopy = new Books[BooksNumbers];
		cout<<"Enter How many Book Details you want enter:";
		cin>>BookNumber;
		BooksNumbers+=BookNumber;
		bookCopy=book;								//؟؟؟!!
		book = new Books[BooksNumbers];
		for(int i=0;i<BooksNumbers;i++){
			cout<<"Enter Name: ";
			cin>>book->BookName;
		}
	}
	class Newspapers{
		string NewspaperName;
		long int NewspaperId;
		string NewspaperWriter;
		int NewspaperNumber=0;
		Newspapers *newspaper;
		Newspapers *newspaperCopy;
		void InputNewspapers(){
			cout<<"Enter How many Newspapers Details you want enter:";
			cin>>NewspapersNumbers;
			newspaper = new Newspapers[NewspapersNumbers];
			for(int i=0;i<NewspapersNumbers;i++){
				cout<<"Enter Name of Newspaper ["<<i<<"] : ";
				cin>>newspaper->NewspaperName;
				cout<<"Enter Id of Newspaper ["<<i<<"] : ";
				cin>>newspaper->NewspaperId;
				cout<<"Enter Name of BookWriter ["<<i<<"] : ";
				cin>>newspaper->NewspaperWriter;
			}
		}
		void ShowAll(){
			for(int i=0;i<NewspaperNumber;i++){
				cout<<"Name of Newspaper ["<<i<<"] : "<<newspaper->NewspaperName<<endl;
				cout<<"Id of Newspaper ["<<i<<"] : "<<newspaper->NewspaperId<<endl;
				cout<<"Name of NewspaperWriter ["<<i<<"] : "<<newspaper->NewspaperWriter<<endl;
			}
		}
	};
	class Magazines{
		
	};
};
class address {
private :
	char city[33];
	char street[33];
	char ave[33];
	int pelak;
public :
	virtual void print_address(void){
		cout << "the city of the exact person is equal with : " << endl;
		cout << this->city;
		cout << "the street of the exact person is equal with : " << endl;
		cout << this->street;
		cout << "the avenue of the exact person is equal with : " << endl;
	}
};
class person {
private :
	int birth_Day;
	int birth_month;
	int birth_year;
	char first_name[333];
	char last_name[333];
	long int personal_code;
	friend void print_person(person);
public :
	virtual void show_person(void) {
		cout << "the birth day of the person is equal with : " << endl;
		cout << this->birth_Day;
		cout << "the birth month of the person is equal with : " << endl;
		cout << this->birth_month;
		cout << "the birth year of the person is equal with : " << endl;
		cout << this->birth_year;
		cout << "the personal code of the person is equal with : " << endl;
		cout << this->personal_code;
		cout << "the full name of the person is equal with : " << endl;
		cout << this->first_name << "   " << this->last_name;
	}
	virtual void scan_person(void) {
		cout << "please Enter the first name of the person : " << endl;
		cin >> this->first_name;
		cout << "please Enter the last name of the person : " << endl;
		cin >> this->last_name;
		cout << "please Enter the birth day of the person : " << endl;
		cin >> this->birth_Day;
		cout << "please Enter the birth month of the person : " << endl;
		cin >> this->birth_month;
		cout << "pleasd Enter the birth year of the person : " << endl;
		cin >> this->birth_year;
		cout << "please Enter the personal code of the person :  " << endl;
		cin >> this->personal_code;
	}

};
class worker :public person {
private :
	char job[33];
	long int salery;
public:
	virtual void scan_person(void){
		person::scan_person();
		cout << "please Enter the job of the exact person : " << endl;
		cin >> this->job;
		cout << "please Enter the salery of the exact person : " << endl;
		cin >> this->salery;
	}
};
class member :public person {
private :
	char type[33];

};
int main(){
	Books b;
	b.InputBooks();
	b.ShowAll();
	return 0;
}
