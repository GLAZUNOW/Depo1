#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int n=3;
	bool chk=false;
	ofstream pf;
	pf.open("sifreler.txt");
	string user,pass;
	pf<<"user"<<"\t"<<"pass"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<i+1<<"kisinin kullanici adi ve sifresi: ";
		cin>>user>>pass;
		pf<<user<<"\t"<<pass<<endl;
    }
    pf.close(); 
    string user,pass,password,username;
	ifstream rf;
	rf.open("sifreler.txt");
	while (chk==false)
	{
		cin>>username>>password;
		while (!rf.eof())
		{
			rf>>user>>pass;
			//cout<<username<<" "<<password<<endl;
			if(password.compare(pass)==0&&username.compare(user)==0)
			{
				chk=true;
			}
		}
		rf.close(); 
		if(chk==true) cout<<"bankaya hosgeldiniz..."<<endl;
		else 
		{
			chk=false;
			n--;
			cout<<n<<"hakiniz kaldi..."<<endl;
			if(n==0) cout<<"lutfen banka ile iletisime geciniz";
		}
	}
}