#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x,y,h;
	char yt;
	
	cout<<"program pengurangan tanpa angka negatif\n";
	cout<<"masukkan x\t:";
	cin>>x;
	cout<<"masukan y\t:";
	cin>>y;
	
	if(x<y)
	h=y-x;
	else
	h=x-y;
	cout<<"hasil\t\t:"<<h<<"\n";
	
	
	selesai:
	cout<<"Terima Kasih";
	
	
}
