#include<iostream>
using namespace std;
int main(){
    int pi=3.14;
	int Radius;
	int Height;
	
	cout<<"Enter the desired Radius ";
	cin>>Radius;
	
	cout<<"Enter the desired Length ";
	cin>>Height;
	
	cout<<"Volume = ";
	cout<<0.33*pi*Radius*Radius*Height;
	return 0;
}
