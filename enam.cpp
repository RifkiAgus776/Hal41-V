#include <iostream>
using namespace std;

int main (){
	
	float a,b,c,d;
	a = 1;
	c = 0;
	cout<<"berapa kali ? ";
	cin>>b;

	do{
		cout<<a<<",";
		c+=a;
		a++;		
	}	
		while (a <= b);
		d = c / b;
		cout<<endl;
		cout<<"Hasil :"<<c<<endl;
		cout<<"Rata Rata :"<<d<<endl ;
}
