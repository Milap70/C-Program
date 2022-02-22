#include <iostream>
using namespace std;

char sum(char l,char b,char h)
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


int main()
{
	//cout << "sum is: " << sum() << endl;
	cout << "sum is: " << sum(9) << endl;
	cout << "sum is: " << sum(15.15,12) << endl;
	cout << "sum is: " << sum(3,4,'a') << endl;

return 0;
}
