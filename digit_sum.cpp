#include <bits/stdc++.h>
using namespace std;



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
int temp =0;
for (int i = 0; i <shift; ++i)
{
	temp=mark[size-1];
	for (int j = size-1; j >0; j--)
	{
		mark[j]=mark[j-1];
	}
	mark[0]=temp;
}

//////////// Right shift////////////

// for (int i = size-1; i < shift; i--)

// {
// 	mark[i]=mark[i-shift];
	
// }
// for (int i = 0; i < shift; i++)
// {
// 	mark[i]=0;
// }



/////////////// left shift //////////

// for (int i = 0; i < size-shift; i++)
// {
// 	mark[i]=mark[i+shift];

	
// }
// for (int i=size-shift; i<size ; i++){
// 	mark[i]=0;
// }

cout<<"Size of "<<size<<endl;
cout<<"shift "<<shift<<endl;




	for (int i = 0; i < n; ++i)
	{
		cout<<mark[i]<<" ";
	}


	return 0;
}