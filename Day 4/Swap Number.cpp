#include<iostream>
using namespace std;

void swap(int *x,int*y)
{

int swap;
swap = *x;
*x = *y;
*y = swap;
}

int main()
{

int x,y;
cin >> x;
cin >> y;
cout << "Before " << x << y << endl;

swap(&x,&y);
cout << "after" << x << y << endl;

return 0;
}

/*
int main()
{
	int x,y;
	int temp;
	int *a,*b;

	cout <<"two number ";
	cin >> x>> y;

 	a=&x;
	b=&y;

	temp = *a;
	*a=*b;
	*b=temp;
cout << "after " << x<< y;

return 0;

} */
