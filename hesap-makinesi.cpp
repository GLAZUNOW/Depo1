#include <iostream>
using namespace std;
int main()
{
	label: cout<<"Hesap Makinesine Hosgeldiniz... \n";
	label1: cout<<"";
	int s1,s2,secim,sonuc;
	cout<<"birinci sayiyi giriniz: ";
	cin>>s1;
	cout<<"lutfen bir secim yapiniz...\n 1-TOPLAMA,2-CİKARMA,3-CARPMA,4-BOLME \n";
	cin>>secim;
	if(secim>4)
	{
	cout<<"yanlis veya hatali bir secim yaptiniz...";
	}
	cout<<"ikinci sayiyi giriniz: ";
	cin>>s2;	
	if(secim==1)
	{
		sonuc=s1+s2;
	}
	else if(secim==2)
	{
		sonuc=s1-s2;
	}
	else if(secim==3)
	{
		sonuc=s1*s2;
	}
	else if(secim==4)
	{
		sonuc=s1/s2;
	}
	cout<<"isleminizin sonucu: "<<sonuc<<endl;
	goto label1;
}