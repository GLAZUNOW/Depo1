#include <iostream>
using namespace std;
int main ()
{
	int x,toplam;
	for(int i=0;i<10;i++)
	{
		if(i%2==0&&i%3!=0)
		{
			x++;
			toplam=toplam+i;
		}
	}
	cout<<x<<" "<<toplam<<" "<<(float)toplam/x<<endl;
}
