#include<iostream>
using namespace std;

int main(){
	int n=0;	//initiate
	cin>>n;		//1. input n;
	while(1){	//6. goto 2;
		cout<<n<<endl;	//2. print n;
		if(n==1) break;	//3. if... STOP
		if(n%2)	n=3*n+1;	//4. if ...
		else	 n=n/2;	 //5.else.... 
	}
	return 0;
	
}
