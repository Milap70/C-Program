#include<iostream>
#include<ctime>
using namespace std;

time_t now = time(0);
tm* tPtr = localtime(&now);

class Time{
 
     public:
	int hour;
	int minute;
	int second;

     public:

	void setTime()
		{
			hour = (tPtr->tm_hour);
			minute = (tPtr->tm_min);
			second = (tPtr->tm_sec);
                        cout << "hello";
		}

	Time getTime(){
			Time temp;
			temp.setTime();
		cout << "hour= " << temp.hour << endl;
                cout << "minute =" << temp.minute  << endl;
                cout << "seconds=" << temp.second  << endl;
	return temp;
	}

	Time sleepTime(Time sleep,Time wake)
		{
			Time temp;
		temp.hour=wake.hour-sleep.hour;
		temp.minute=wake.minute-sleep.minute;
		temp.second=wake.second-sleep.second;
		if(temp.second < 0)
			temp.minute--;
			temp.second +=60;
			
		if(temp.minute < 0)
			temp.hour--;
		

		cout << "Sleep Time Is" << endl;
		cout << "" << temp.hour;
                cout << ":" << temp.minute;
                cout << ":" << temp.second<<endl;

      return temp;
		}

};


class Date{
 
     public:
	int day;
	int month;
	int year;

	Date setDate()
                {
			Date temp;
			temp.day = tPtr->tm_mday;
			temp.month = (tPtr -> tm_mon)+1;
			temp.year = (tPtr ->tm_year)+1900;

			cout << "Day =" << temp.day << "month=" <<temp.month << "Year =" << temp.year;
			return temp;
		}

	Date setDob(int x,int y,int z)
		{
			Date obj;
			obj.day=x;obj.month=y,obj.year=z;
			cout<< "DOb is " << obj.day  << "/" << obj.month << "/"<< obj.year;
			return obj;
		}
	Date findAge(Date Dob)
		{

			Date temp,cur=setDate();
				
		cout << "hello " << Dob.day;
			temp.day=cur.day-Dob.day;
			temp.month=cur.month-Dob.month;
			temp.year=cur.year-Dob.year;
			while(temp.day < 0){
				temp.month--;
				temp.day +=31;}
			while(temp.month < 0){
				temp.year--;
				temp.month +=12;}
			cout << endl << "Day =" << temp.day << endl << "month="  <<temp.month << endl <<"Year =" << temp.year<< endl;
			return temp;


		}



};


int main() {

		
    Time temp;
    Time sleep,wake;
    char* dt = ctime(&now);

cout << "The local date and time is: " << dt << endl;
//temp.getTime();
//wake.setTime();
//sleep.setTime();
//wake.hour=15;wake.minute=30,wake.second=45;
//sleep.hour=10;sleep.minute=20,sleep.second=55;
//temp.sleepTime(sleep,wake);

Date abc,obj,pqr,Dob;
abc.setDate();

obj.setDob(9,11,2001);
Dob.day=19;
Dob.month=11;
Dob.year=1975;

pqr.findAge(Dob);


  
			
   
 return 0;
}
