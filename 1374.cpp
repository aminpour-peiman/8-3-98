#include<iostream>
#include<conio.h>
using namespace std;
main(){

	int num=0;
    string str;
	cin>>num;
	switch(num){
		case 1:
			str ="it is 1";break;
		case 2:
			str ="it is 2";break;
		case 3:
		str="it is 3";break;
	
		default:
			str ="Unknown ";	
			
	}
	cout<<str;
}
