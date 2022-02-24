#include<iostream>
using namespace std;

class Equal{

	int x,y;
	public:

	Equal(){
	x=y=0;
	}

	Equal(int a,int b){
	x=a;
	y=b;
	}

	int operator ==(Equal);

	void display(){
	cout << "x is "<< x << endl;
	cout << "y is "<< y << endl;}
};

int Equal :: operator ==(Equal obj){

	if(x==obj.x && y ==obj.y){
		cout << "Equal" ;
	return 1;}
	else
		cout << "Not Equal" ;
	return 0;
}

int main(){

Equal obj1(5,8),obj2(5,8);
obj1==obj2;
}

