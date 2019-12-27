#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
	string usr,pwd,username="emre",password="1234";
	int a=0,b=3;
	while (a<3)
	{
		cin>>usr>>pwd;
		if(usr==username&&pwd==password)
		{
			cout<<"hosgeldiniz"<<endl;
		}
		else 
		{
			cout<<"lutfen dogru sifre ve kullanici adi giriniz "<<b<<" hakiniz kaldi..."<<endl;
			b--;
			if(b==0)
			{
				cout<<"lutfen banka ile iletisime geciniz..."<<endl;
			}
		}
	}
	a++;
}
