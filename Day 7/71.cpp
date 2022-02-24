#include<iostream>
using namespace std;

class Num{

	int x,y,z;
	public:
		Num(){
		x = 0;

		}

	Num(int p){
		x = p;
		
		}

	void operator ++(){
		++x;
	cout << "Pre incre " << x;
	}
	
	Num operator ++(int);
	//x++;
	//cout << "Post inc " << x;
	

	void display(){
	cout << "x is " << x;
	}
};

Num Num :: operator ++(int){

	Num temp;
	temp.x=x++;
	cout << "x is post " << temp.x;
	return temp;
}


int main(){

Num obj(10),d;
//obj(10);
//++obj;
;
d.display();

//um obj1(12);
//obj1++;
return 0;
}

