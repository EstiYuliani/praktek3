#include <iostream>
#include <math.h>
using namespace std;

int main(){
	char pilihan,yt;
	double ls,lp,p,l,a,t(2.5);
	
	cout <<"*************************\n";
	cout <<"        pilihan\n";
	cout <<"P = Luas persegi panjang\n";
	cout <<"S = Luas segitiga\n";
	cout <<"*************************\n";
	cout <<"silahkan input pilihan:";
	cin >>pilihan;
	
	if (pilihan=='p'|| pilihan=='P')
	{
		cout<<"input panjang\t:";
		cin >>p;
		cout<<"input lebar\t\t:";
		cin >>l;
		lp=p*l;
		cout<<"Luas persegi adalah\t:"<<lp<<"\n";
	}
	else if 	(pilihan=='s'|| pilihan=='S')
	{
		cout<<"input alas\t\t:";
		cin >>a;
		cout<<"input tinggi\t\t:";
		cin >> t;
		ls=0.5*(a*t);
		cout<<"luas segitiga adalah\t:"<<ls<<"\n";
	}
	else
	cout<<"kode yang anda input salah\t"<<"\n";
	
	
		selesai:
	cout<<"Terima Kasih";
	
	
}
