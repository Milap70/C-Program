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

	/*Complex operator +(Complex c){
	Complex temp;
	temp.real = real + c.real;
	temp.img = img + c.img;
	return temp;} */
	
	 friend Complex operator + (Complex c1,Complex c2);
};

Complex operator + (Complex c1,Complex c2){
	
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;}

int main(){

	Complex c1(1,1),c2(9,6);
	Complex c3;
	c1.display();
	c2.display();
	c3.display();

	c3 = c1 + c2; c3.display();

return 0;
}
