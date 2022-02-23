#include<iostream>
using namespace std;

class Complex{

	int real,img;
	public:
		Complex(){
		real = 0;
		img = 0;
		}

	Complex(int x,int y){
		real = x;
		img = y;
		}

	void display(){
	cout << "THe Value for real :" << real << "The value for img :" << img << endl;
	}

	
	
	 friend Complex operator + (Complex c1,Complex c2);
};

class ABC{

	int x,y;
	public:
		ABC(){
		x = 0;
		y = 0;
		}

	ABC(int p,int q){
		x = p;
		y = q;
		}

	void display(){
	cout << "THe Value of x is :" << x << "The value of y is :" << y << endl;
	}

	friend ABC operator * (ABC obj1,ABC obj2);
};
Complex operator + (Complex c1,Complex c2){
	
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;}

ABC operator * (ABC obj1,ABC obj2){
	ABC temp;
	temp.x = obj1.x * obj2.x;
	temp.y = obj1.y * obj2.y;
	return temp;}


int main(){

	Complex c1(1,1),c2(9,6);
	ABC obj1(5,5),obj2(10,10);
	Complex c3;
	ABC obj3;
	c1.display();
	c2.display();
	c3.display();

	c3 = c1 + c2; c3.display();
	obj3 = obj1*obj2; obj3.display();

return 0;
}
