#include <iostream>
using namespace std;

int main (){
	
	int l,c,d;
	c = 1;
	l=0;
	cout<<"berapa kali ? ";
	cin>>d;

	while (c <= d){
		cout<<c<<",";
		l+=c;
		c++;
	}	
	cout<<endl;
	cout<<"Total :"<<l;
}
