/* The given code has a base class charInput, it has member methods add() and getvalue(). The class numInput inherits charInput. You need to implement:
	add():  it should be inside charInput, this adds the given character to the current value
	getValue(): it should be inside numInput, it returns the current value
	add(): it should be inside numInput, this must override the base class method so that each non-numeric char is ignored. */



#include <iostream>
#include <string>
using namespace std;
string list;
class charInput{
public:
    void add(char c) { 
        list =list +  c;
    }

    std::string getValue() { return list; }
};

class numInput : public charInput { 
    public:
    void add(int c){
         
         if(('0' <= 'c') && ( c <= '9')){
         list +=  c;
      }
   
    }
};
int main(){

    numInput* input = new numInput();
    input->add('1');
    input->add('a');
    input->add('0');
    cout << input->getValue();
    
}
