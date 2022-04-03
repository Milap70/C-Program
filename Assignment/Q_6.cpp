/* The given code is  The grade of a student can be based on the following criteria:
	Attendance must be more than 50%
	Tests scores must be more than .70
	Total score must be more than 5600 (just go with this number)
The grades are awarded as follows:
	Grade is 10: if all conditions are met
	Grade is 9: if conditions 1 and 2 are met
	Grade is 8: if conditions 3 and 3 are met
	Grade is 7: if conditions 1 and 3 are met
	Grade is 6: if only one condition is met
	Grade is 5: if none of the conditions are met
*/


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
