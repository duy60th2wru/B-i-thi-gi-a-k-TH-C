#include<iostream>
#include<cmath>
using namespace std;
int main()

{ 
	double tienvon,laisuat,tienkyvong;
	int nam;
	cout<<"Nhap so tien von, lai suat, tien ky vong : ";
	cin>>tienvon>>laisuat>>tienkyvong;
	laisuat=laisuat/100;
	for (nam=0;tienvon<tienkyvong;tienvon+=tienvon*laisuat,nam++);
	cout<<"So nam can thiet de dat so tien ki vong la : "<<nam<<" nam";
	return 0;
}


