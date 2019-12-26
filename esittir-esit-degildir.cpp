#include <iostream>
using namespace std;
int main()
{
	int x,y;
	label: cout<<"lutfen birinci sayiyi giriniz: ";
	cin>>x;
	label1: cout<<"lutfen ikinci sayiyi giriniz: ";
	cin>>y;
	if(x==y) cout<<"x y e esittir...\n";
	else cout<<"x y e esit degildir...\n";
	goto label;
	
}