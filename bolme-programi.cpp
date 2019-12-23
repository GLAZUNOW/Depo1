#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	int n=3,sayi,taban,bolum,tmp;
	cin>>sayi>>taban;
	tmp=sayi;
	while(true)
	{
		bolum=tmp/taban;
		tmp=bolum;
		cout<<tmp<<endl;
		if(tmp==0) break;
	}
}