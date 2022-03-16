#include<iostream>
#include<fstream>
using namespace std;

class student{
	public:
	int roll;
	char name[25];
	float marks;
	void get(){
	cout << "Enter roll no and name"<< endl;
	cin >> roll >> name;
	cout << "marks"<< endl;
	cin >> marks;
	}

	void add(){
	fstream f;
	student obj;
	f.open("file.dat",ios::app | ios::binary);
	obj.get();
	f.write((char *)&obj,sizeof(obj));
	f.close();
	} 

	void show(){
		fstream f;
		student obj;
		int rolll;
		cout << "Enter a roll no that you want to search" << endl;
		cin >> rolll;
		f.open("file.dat",ios::in| ios::binary);
		while(!f.eof()){
		
		f.read((char *)&obj,sizeof(obj));
		
		if(rolll == obj.roll){
		cout << "Roll " << obj.roll << "Name " << obj.name << "Marks :" << obj.marks << endl;}
}
		
		f.close();
	}
	
};

int main(){
	
	student obj1;

	 char ch='n';
	do{
		obj1.add();
		cout << "want add more?(y/n)" << endl;
		cin >> ch;
	}while(ch == 'y' || ch== 'y');
	cout << "updated" << endl; 
	obj1.show();
return 0;



}

