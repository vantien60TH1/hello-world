#include<iostream>
using namespace std;
int main()
{
	double tienbandau, tienkivong, laisuat;
	int n;
	cout<<"Nhap vao so tien ban dau:  ";
	cin>>tienbandau;
	cout<<"Nhap vao so tien ki vong:  ";
	cin>>tienkivong;
	cout<<"Nhap vao lai suat(theo nam):  ";
	cin>>laisuat;
	n=0;
	do{
		tienbandau+=tienbandau*laisuat;
		n++;
	}
	while(tienbandau<tienkivong);
	cout<<"So nam can thiet de dat duoc so tien ki vong: "<<n;
	return 0;
}
