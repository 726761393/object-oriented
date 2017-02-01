#include<iostream>
using namespace std;

int main(){
	int sum,i,t=0,x,y,a[3],ifpositive=1;
	cin>>x;cin>>y;
	sum=x+y;
	if(sum<0) {ifpositive=0;sum=sum*(-1);}
	if(sum/1000>0) t=1;
	if(sum/1000000>0) t=2;
	for(i=0;i<=t;i++)
	{
	    a[i]=sum%1000;
		sum=sum/1000;
	}
	if(ifpositive==0) cout<<"-";
	for(i=t;i>=0;i--)
	{  

		if(i!=t&&a[i]<10) cout<<"00"<<a[i];
	    else if(i!=t&&10<a[i]&&a[i]<100) cout<<"0"<<a[i]; 
		else cout<<a[i];
		if(i>0) cout<<",";
	}
	printf("\n");

  return 0;
}