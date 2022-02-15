#include<iostream>
using namespace std;

class Calculator{

	public:
		int input1;
		int input2;
		
	void setInput(int a,int b){
		input1= a;
		input2=b;
		}

	void setinput(int c){
		input1=c;
		}
	int add(){
		return input1+input2;
	}
 	
	int sub(){
		return input1-input2;
	}

	int mul(){
		return input1*input2;
	}

	float div(){
		float ans = (float) input1 / (float) input2 ;
		return ans;
	}

	int remin(){
		return input1%input2;
		
	}

       float sqr(){
		return input1*input1;
	}

	float cube(){
		return input1*input1*input1;
	}
};

int main(){

	Calculator obj1,obj2;
	int choice;
	obj1.setInput(45,49);
	obj2.setinput(9);
        
	cout << "1.Addition\n2.substraction \n3.Multiplication\n4.Divison\n5.remainder\n6.square\n7.cube" << endl << "Enter Your Choice :";
	cin >> choice;
	switch(choice){
     

	case 1:
	cout <<"The sum of Input is:" << obj1.add()<< endl ; break;

	case 2:
	cout << "Sub of Input is: " << obj1.sub() << endl ; break;

	case 3:
        cout << "The multiplication is:" << obj1.mul() << endl ; break;

	case 4:
	cout << "The Divison is:" << obj1.div() << endl; break;

	case 5:
	cout << "The remainder after divison of "<< obj1.input1 << "and " << obj1.input2 << "is " << obj1.remin() << endl; break;

	case 6:
	cout << "The square of " << obj2.input1 << " is :" << obj2.sqr() << endl; break;

	case 7:
        cout << "The cube of " << obj2.input1 << "is :" << obj2.cube() << endl; break;

	default:
	break;
       }
return 0;
}
