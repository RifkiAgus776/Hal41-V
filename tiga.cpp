#include <iostream>
using namespace std;

int main (){
	
	int l,A,B;
	A = 1;
	l=0;
	cout<<"berapa kali? ";
	cin>>B;
	
	do {
		cout<<A<<",";
		l+=A;
		A++;
		}
			
		while (A <= B);
		cout<<endl;
		cout<<"jumlah total :"<<l;
}
