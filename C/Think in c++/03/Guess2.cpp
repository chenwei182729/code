#include<iostream>
using namespace std;
int main()
{
	int secret=15;
	int guess=0;
	do{
		cout<<"guess the number :";
		cin>>guess;
	}while(guess!=secret)
	cout<<"You guessed it !"<<endl; 
 } 
