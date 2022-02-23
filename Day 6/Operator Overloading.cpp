// op. overloading

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

	Complex operator +(Complex c){
	Complex temp;
	temp.real = real + c.real;
	temp.img = img + c.img;
	return temp;}

	Complex operator -(Complex c){
		Complex temp;
		temp.real = real - c.real;
		temp.img = img - c.img;
		return temp;}

	Complex operator *(Complex c){
		Complex temp;
		temp.real = real * c.real;
		temp.img = img * c.img;
		return temp;}

	Complex operator / (Complex c){
		Complex temp;
		temp.real = real / c.real;
		 temp.img = img / c.img;
		return temp;}

	Complex operator % (Complex c){
		Complex temp;
		temp.real = real % c.real;
		 temp.img = img % c.img;
		return temp;}

	Complex operator <= (Complex ob){
		Complex temp;
		temp.real = (real <= ob.real);
		temp.img = (img <= ob.img);
		return temp;}

	Complex operator >= (Complex ob){
		Complex temp;
		temp.real = (real >= ob.real);
		temp.img = (img >= ob.img);
		return temp;}

	Complex operator != (Complex ob){
		Complex temp;
		temp.real = (real != ob.real);
		temp.img = (img != ob.img);
		return temp;}

	Complex operator && (Complex ob){
		Complex temp;
		temp.real = (real && ob.real);
		temp.img = (img && ob.img);
		return temp;}

	Complex operator || (Complex ob){
		Complex temp;
		temp.real = (real || ob.real);
		temp.img = (img || ob.img);
		return temp;}

		
};

int main(){

	Complex c1(9,7),c2(1,6);
	Complex c3;
	c1.display();
	c2.display();
	c3.display();

	c3 = c1+ c2; c3.display();
	c3= c1 - c2; c3.display();
	c3= c1*c2;   c3.display();
	c3= c1/c2;   c3.display();
	c3= c1%c2;   c3.display();
	c3 = (c1<=c2);  c3.display();
	c3 = (c1>=c2);  c3.display();
	c3 = (c1!=c2);  c3.display();
	c3 = (c1&&c2);  c3.display();
	c3 = (c1 || c2);  c3.display();


	//c3= c1.operator + (c2);
	


return 0;
}
