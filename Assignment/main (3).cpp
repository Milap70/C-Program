/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int attendance;
    cout << "Enter the attendance";
    cin >> attendance;
    
    int marks;
    cout << "Enter the marks";
    cin >> marks;
    //marks = marks/100;
    cout << marks;
    
    int total;
    cout << "total score";
    cin >> total;
    
    if(attendance > 50 && marks > 70 && total>5600){
        cout << "Grade 10";
    }
    
    else if(attendance > 50 && marks > 70 && total <= 5600 ){
        cout << "Grade 9";
    }
    
    else if(total > 5600 && marks > 70 && attendance <=50){
        cout << "Grade 8";
    }
    
    else if(attendance > 50 && total > 5600 && marks <=70){
        cout << "Grade 7";
    }
    
    else if(attendance > 50  || marks > 70 || total>5600){
        cout << "Grade 6";
    }
    
    else{
        cout << "fail..";
    }
    
    
    

    return 0;
}
