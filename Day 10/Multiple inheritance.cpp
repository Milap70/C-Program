// Multiple inheritance

#include<iostream>
using namespace std;

class Person{

	int age=3,weight=30;
	int height=10;
	public :
	
	void talk(){	
	cout << "inside public";
		cout << "talking"<< endl;
	}
	
	
	int inches=100;
	void walk(){
	cout<< "inside protected"<< endl;;
		cout << "walking";
	}
	

	
	void eat(){
	cout<< "inside private";
		cout << "eating"<< endl;
	}

};
class Doctor {

	public:
	void check(){
	cout << "checking"<< endl;
	}
};

class ortho : public Doctor,public Person{
	public:
	void orr(){
	cout << "ortho doctor"<< endl;
	}
};

int main(){

ortho obj;
obj.orr();
obj.check();
obj.talk();
cout << "Hello " << obj.inches;
return 0;
}
