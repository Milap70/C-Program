#include<iostream>
using namespace std;

class Calculator{
   
	
 
	public:
		int input1,input2;

	void setInput(int a,int b){
		input1=a;
		input2=b; }

	int add(Calculator,Calculator);
	Calculator mul(Calculator,Calculator);
	
	private:
	int sub(){
		return input1-input2;

	
}




};

int Calculator :: add(Calculator obj1,Calculator obj2){

		return obj1.input1+obj2.input2;
			}

Calculator Calculator :: mul(Calculator obj1,Calculator obj2){
		obj1.sub();
		cout << "hii " << obj1.sub();
		
		Calculator obj3;
		obj3.setInput(obj1.input1*obj2.input2,obj1.input2*obj2.input1);
		return obj3;

}





int main(){

  Calculator obj1,obj2,obj3,obj4;
  int x,y;
cout << "Enter two numbers " <<endl;
  cin >> x >> y ;
  obj1.setInput(x,y);
  obj2.setInput(40,50);

  
  cout << x<< y<< endl;
  cout << "sum " << obj1.add(obj1,obj2);

obj4 = obj1.mul(obj1,obj2);
  cout << "Mul is" << obj4.input1 << endl << obj4.input2;
}
