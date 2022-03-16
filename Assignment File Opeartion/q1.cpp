#include<iostream>
#include<fstream>
using namespace std;

int main(){

	ifstream input;
	int count=0;
	string word ;
	input.open("file.txt");
	if(!input)
		cout << "file did not open" << endl;
	else{
		while(!input.eof()){
			
			while(input >> word){
			cout << word<< endl;
			if(word=="the" || word== "The")
			count++;}
		}
	cout << "Total words: " << count << endl;
	
	}
	input.close();
return 0;
}
