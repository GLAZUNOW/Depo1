#include <iostream>
#include <vector>
using namespace std;
int main()
{	
	setlocale(LC_ALL,"turkish");
/*	vector <int> v4;
	v4.assign(5,23);
	for(int i=0;i<5;i++)
	cout<<v4[i]<<" "<<endl;
	
	int a=v4.back();
	cout<<endl;
	cout<<a<<endl;*/
	
	vector <float> v5;
	float b=0;
	while(b != -1)
	{
		cout<<"Bir sayý giriniz (durdurmak için -1): ";
		cin>>b;
		v5.push_back(b);
	}
	v5.pop_back();
	float toplam=0,c;
	while(!v5.empty())
	{
		c=v5.back();
		toplam=toplam+c;
		v5.pop_back();
	}
	cout<<toplam<<endl;
}
