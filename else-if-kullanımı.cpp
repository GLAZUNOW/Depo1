#include <iostream>

using namespace std;

int main(){
	 int x;
	 label:
	 	cout<<"lutfen notu giriniz: ";
	 	cin>>x; 
	 	if(x<50){
	 		cout<<"kaldiniz..."<<endl;
		 }
		 else if(x>49&&x<70) {
		 	cout<<"gectiniz..."<<endl;
		 }
		 
		 else if (x>69&&x<85){
		 	cout<<"tesekkur aldiniz..."<<endl;
		 }
		 else if(x>84&&x<101)
		 {
		 	cout<<"taktir aldiniz..."<<endl;
		 }
		 else if (x>100)
		 {
		 	cout<<"boyle bir not araligi yoktur..."<<endl;
		 }
		 goto label;
}
