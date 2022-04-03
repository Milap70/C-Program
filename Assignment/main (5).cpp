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
