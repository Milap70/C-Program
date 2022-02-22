
#include<iostream>
using namespace std;

int& max(int &,int &);

int main()
{
	int a,b,ans;
	cin >> a >> b;
	ans = max(a,b);
	cout << "Max " << ans;
}

int& max(int &x,int &y)
{
	if(x>y)
	return x;
	else
	return y;
}
