#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	label: cout<<"lutfen kayit olmak icin kullanici adi ve sifre belirleyiniz: ";
	int n=3;
	bool chk=true;
	ofstream pf;
	pf.open("sifreler.txt");
	string user,pass;
	pf<<"user"<<"\t"<<"pass"<<endl;
	for(int i=0;i<1;i++)
	{
		cin>>user>>pass;
		pf<<user<<"\t"<<pass<<endl;
    }
    pf.close(); 
    
    cout<<"bankamiza hosgeldiniz.kullanici adi ve sifrenizi giriniz: "; string password,username;
	while (chk==true)
	{
		cin>>username>>password;
	    if(password.length()==4)
	    {
	    	if(username==user&&password==pass) cout<<"hosgeldiniz..."<<endl;
	    	else
	    	{
	    		n--;
	    		if(n==0)
	    		{
	    			cout<<"banka ile temasa geciniz..."<<endl;
	    			chk=false;
	    		}
	    		else cout<<n<<" hakiniz kaldi"<<endl;
	    	}
	    }
	    else cout<<"sifre 4 karakterden olusmalidir...."<<endl;
	}
	goto label;
}