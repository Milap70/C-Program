#include<iostream>
using namespace std;

class car{
	public:
	void carr(){
	cout << "Car";}
};

class Fuelcar : public car{
	public:
	void fuel(){
	cout << "ford";}
};

class Eleccar : public car{
	public:
	void elec(){
	cout << "tesla";}
};

class tyre: public Eleccar,public Fuelcar{
	public:
	void tyree(){
	cout << "4";}
};

int main(){

tyre obj;
obj.tyree();
obj.elec();
obj.fuel();
obj.carr();

return 0;
}
