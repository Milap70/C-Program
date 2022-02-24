#include<iostream>
using namespace std;

int main(){

float *pt= new float;
*pt =10;

cout << "Value :" << *pt << endl;
cout << "add. of Var.. :" << pt << endl;
cout << "size of var.." << sizeof(*pt) << endl;
cout << "size of ptr.." << sizeof pt << endl;

return 0;
}
