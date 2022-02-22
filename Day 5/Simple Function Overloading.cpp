#include <iostream>
using namespace std;

int cube(int l=5,int b=6,int h=7)
{
	return l*b*h;
}

int main()
{
	cout << "cube is: " << cube() << endl;
	cout << "cube is: " << cube(9) << endl;
	cout << "cube is: " << cube(15,12) << endl;
	cout << "cube is: " << cube(3,4,7) << endl;

return 0;
}
