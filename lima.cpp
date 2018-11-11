#include <iostream>
using namespace std;

int main (){
	
	float a,b,c,d;
	a = 1;
	c = 0;
	cout<<"berapa kali ? ";
	cin>>b;

	while (a <= b){
		cout<<a<<",";
		c+=a;
		a++;
	}	
		d = c / b;
		cout<<endl;
		cout<<"Hasil :"<<c<<endl;
		cout<<"Rata Rata :"<<d<<endl ;
}
