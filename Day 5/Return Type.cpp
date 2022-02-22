#include <iostream>
using namespace std;

class ABC{

public:
char sum(char l,char b,char h)
{
	return l+b+h;
}
float sum(int l,char b,char h)
{
	return l+b+h;
}

int sum(int l)
{
	return l;
}

float sum(float l,float b)
{
	return l+b;}

char sum(float a,int b){
	
	return a+b;}

};

int main()
{
ABC obj;
obj.sum(9); 
	//cout << "sum is: " << sum() << endl;
	cout << "sum is: " << obj.sum(9) << endl;
	cout << "sum is: " << obj.sum(15.15,12) << endl;
	cout << "sum is: " << obj.sum(3,4,'a') << endl;

return 0;
}
