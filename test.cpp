#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[]={12,3,14,11,9,35};
int size = sizeof(arr)/sizeof(arr[0]);

for (int step = 0; step< size; step++)
{
	for (int i = 0;  i< size-step-1; i++)
	{
		
		if (arr[i]>arr[i+1])
		{
			int temp= arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}



for (int i = 0; i < size; ++i)
{
	cout<<arr[i]<<endl;
}




	return 0;
}