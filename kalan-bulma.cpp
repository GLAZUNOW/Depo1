#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int a,b;
	for(int i=0;i<11;i++)
	{
		a=pow(3,i);
		int x=a%29;
		cout<<x<<endl;
	}
}