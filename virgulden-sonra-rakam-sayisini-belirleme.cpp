#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	float tp;
	for(int i=1;i<1000;i++)
	{
		tp=tp+pow(0.3,i);
	}
	setw(5);
	cout<<tp<<endl;
/*	printf("%1.1f\n",tp);
	printf("%2.2f\n",tp);
	printf("%3.3f\n",tp);
	printf("%1.4f",tp); */
}