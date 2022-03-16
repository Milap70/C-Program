#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){

	ifstream input;
	int len;
	int count=0;
	char word[100] ;
	input.open("file1.txt");
	if(!input)
		cout << "file did not open" << endl;
	else{
		while(!input.eof())
		{
			
			input >> word;
			cout << word<< endl;	
			len = strlen(word);
			//cout << len;
			for(int i=0;i<len;i++)
			{
				if(word[len-1] == 'e'){
					//cout << word<< endl;
					count++;		
					break;
					}		
			}
		}
	cout << "Total words: " << count << endl;
	
	}
	input.close();
return 0;
}
