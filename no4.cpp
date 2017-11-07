#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x;
	char yt;
	

	cout<<" program menentukan bilangan\n";
	cout<<"positif atau negatif atau nol\n";
	
	cout<<"input nilai\t:";
	cin>>x;

		if (x>0)
	cout<<x<<" adalah bilangan positif\n";
	
	else if (x==0)
	cout<<x<<" adalah bilangan nol\n";
	
	else if (x<0)
	cout<<x<<" adalah bilangan negatif\n";
	
	else 
	cout<<"angka yang anda masukan tidak dapat dibaca oleh sistem , silahkan cek lagi\n";
	
	

}
