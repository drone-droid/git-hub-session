#include<iostream>
using namespace std;

void arraytraverse(int,int,int[],int);

int main(){
	int lb,ub,list[5];
	cout<<"Enter elements of array";
	for(int i=0;i<=4;i++)
	{cin>>list[i];
	}
	 arraytraverse(0,4,list,5);

};

void arraytraverse(int lb, int ub, int list[],int max)
{
	if(lb>ub)
	{
		cout<<"Error";
	}
	if(ub>max)
	{
		cout<<"Error";
	}
	for(int i=lb;i<=ub;i++)
	{
		cout<<"\t"<<list[i];
		
	}
}

