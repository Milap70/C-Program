// inheritance

#include<iostream>
using namespace std;

class Person{

	int age=3,weight=30;
	public :
	
	void talk(){	
	cout << "inside public";
		cout << "talking";
	}
	

	
	void walk(){
	cout<< "inside protected";
		cout << "walking";
	}
	

	protected:
	int height=10;
	void eat(){
	cout<< "inside private";
		cout << "eating";
	}

};



class doctor : public Person{
	
	public:
	void check(){
		cout << "checking";
	}

};

class lawyer : public Person{
	
	public:
	void argue(){
		cout << "argue";
	}

};

class player : protected Person{
	
	public:
	void play(){
		cout << "pass";
	}

};

int main(){

//int choice;
//cout << "Enter Your choice:";
//cin >> choice;


doctor obj;
player obj2;
lawyer obj1;
//obj1.talk();
//obj1.eat();
//obj2.walk();
obj2.play();
cout << obj2.height;
//obj2.eat();
//obj.walk();
obj.talk();

return 0;
}
