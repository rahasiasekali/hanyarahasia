#include <iostream>
using namespace std;

int main()
{
	int nilai[5];
	int i, jum;
	float rata;
	for (i=1; i<5; i++)
	{
		cout<<"Masukkan nilai ke-"<<i<< " : ";
		cin>>nilai[i];
	}
	jum = 0 ;
	for(i=1;i<=5;i++)
	jum = jum + nilai[i];
	rata = jum / 5;
	cout<<"jumlah : "<<jum<<endl;
	cout<<"Rata-rata : "<<rata<<endl;
	return 0;
}
