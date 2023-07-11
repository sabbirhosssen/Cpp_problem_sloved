#include <bits/stdc++.h>
using namespace std;

void leftshift(int arr[],int n){

}

int main(){
	
	int n;
	cin>>n;
int mark[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>mark[i];
	}

int size =sizeof(mark)/sizeof(mark[0]);
int shift =2;

for (int i = 0; i < size-shift; i++)
{
	mark[i]=mark[i+shift];

	
}
for (int i=size-shift; i<size ; i++){
	mark[i]=0;
}

cout<<"Size of "<<size<<endl;
cout<<"shift "<<shift<<endl;




	for (int i = 0; i < n; ++i)
	{
		cout<<mark[i]<<endl;
	}


	return 0;
}