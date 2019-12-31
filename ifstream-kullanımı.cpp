#include <iostream>
#include <string>
#include <fsteam>
 using namespace std;
 
 int main ()
 {
 	int n=3;
 	bool chk=false;
	 string user,pass,password,username;
	 ifstream rf;
	 rf.open("sifreler.txt");
	 while(chk==false)
	 {
	  cin>>user>>password;
	   while(!rf.eof())
	   {
	   rf>>user>>pass;
	   if(password.compare(pass)==0&&username.compare(user)==0)	
	   {
	   	chk=true;
	   }
	   }	
	 }
	 
 }
