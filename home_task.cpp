#include<iostream>
using namespace std;

class Measure{

	public:
		float height,length,width;

	void setInput(float a,float b,float c){
		height = a;
		length = b;
		width = c;
	}

	float area(){
		return height*length;
	}
	
	float volume(){
		return height*length*width;
	}
};

int main()
{
  Measure obj1,obj2;
  obj1.setInput(4,5,6);
  obj2.setInput(5.5,6,7.99);
  cout<< "Area of object1 " << "height("<< obj1.height << ") "<< "and " << "length("<<obj1.length <<") " <<"is " << obj1.area()<< endl;
  cout<< "Volume of object1" << "height("<< obj1.height <<") "<< "length("<< obj1.length <<") "<< "width("<<obj1.width<<") " << "is " << obj1.volume()<< endl;

  cout<< "Area of object2 " << "height("<< obj2.height<<") " << "and " << "length("<<obj2.length<<") " << "is " << obj2.area()<< endl;
  cout<< "Volume of object2" << "height("<< obj2.height<<") " <<"length("<< obj2.length <<") "<< "width("<< obj2.width <<") "<< "is " << obj2.volume()<< endl;



return 0;
}
