#include<iostream>
#include<fstream>
using namespace std;

int main(){

	ifstream input;
	int count=0;
	char word[100] ;
	input.open("file1.txt");
	if(!input)
		cout << "file did not open" << endl;
	else{
		while(!input.eof()){
			
			while(input >> word){
			cout << word<< endl;
	
			if(word[0] == 'e')
				count++;
		}}
	cout << "Total words: " << count << endl;
	
	}
	input.close();
return 0;
}
