#include <iostream>
using namespace std;

int factorial(int m)
{
	int t = 1;
	for (int i = 2; i <= m; i++)
	{
		t = t * i;
	}
	return res;
}


int ncr(int n, int r)
{
	return factorial(n) / (factorial(r) * factorial(n - r));
}



int main()
{
    int white_ball, red_ball, bag;
    cout<<"Enter no. of white ball: ";
    cin>>white_ball;
    cout<<"Enter no. of red ball: ";
    cin>>red_ball;
    cout<<"Enter no. of bag: ";
    cin>>bag;

    int h=ncr(bag, w);
    int c = white_ball + red_ball/2;
    int count = 0;
      
    while(!(b > c))
    {  
     	int ans = h/white_ball;
     	count = ans;
       	break;
    }
   
    cout<<count<<endl;
}