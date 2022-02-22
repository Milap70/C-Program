#include<iostream>
using namespace std;

class integer
{
  int x, y;
  public:
    void set_value(int a,int b)
    {
	x=a;
	y=b;
    
    }
  friend int mean(integer s); 
};

int mean(integer s)
{
  return int(s.x+s.y)/2.0; 
}
int main()
{
  integer c;
int a,b;
cin >> a >> b;
  c.set_value(a,b);
  cout<< "Mean value:" <<mean(c);
  return 0;
}
