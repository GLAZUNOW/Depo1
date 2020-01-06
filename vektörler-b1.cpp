#include <iostream>
#include <vector>
using namespace std;
int main()
{
/*	vector <int> v1;
	cout<<v1.size()<<endl;
	v1.push_back(1);
	cout<<v1.size()<<endl;
	cout<<v1[0]<<endl;
	v1.push_back(-1);
	cout<<v1.size()<<endl;*/
	
/*	vector <int> v2(10);
	for(int i=0;i<10;i++)
	cout<<v2[i]<<" "<<endl; 
	
	vector <int> v3(10,-2);
	for(int i=0;i<10;i++)
	cout<<v3[i]<<" ";*/
	
	vector <int> v4;
	v4.assign(4,23);
	for(int i=0;i<4;i++)
	cout<<v4[i]<<" "<<endl;
	
	v4.assign(5,13);
	
	int a=v4.back();
	cout<<endl;
	cout<<a<<endl;
}
