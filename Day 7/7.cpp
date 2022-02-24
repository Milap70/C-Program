#include<iostream>
using namespace std;

class Num{

	int x,y,z;
	public:
		Num(){
		x = 0;
		y = 0;
		z=0;
		}

	Num(int p,int q,int r){
		x = p;
		y = q;
		z = r;
		}

	void display(){
	cout << "\nTHe Value of x is :" << x << "\nThe value of y is :" << y << "\nThe value of z is : " << z<< endl;
	}
	
	void operator -();
	void operator --();
	void operator +();
	void operator ++();
};

void Num :: operator -(){

	x=-x;
	y=-y;
	z=-z;
}

void Num :: operator --(){

	x=--x;
	y=--y;
	z=--z;
}

void Num :: operator ++(){

	x=++x;
	cout << "x is :" << x;
	x=x++;
	cout << "x is :" << x;
	y=++y;
	z=++z;
}

void Num :: operator +(){

	x=+x;
	y=+y;
	z=+z;
}
int main(){

Num obj(10,20,5);
obj.display();
-obj;
+obj;
//--obj;
++obj;
obj.display();
return 0;
}
