#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int size){
for (int l= 0; l <size-1 ; ++l)
{
	int midx=l;
	for (int m = l+1; m < size; ++m)
	{
		if (arr[m]<arr[midx])
		{
			midx=m;
		}

	}
	if (midx!=l)
	{
		swap(arr[l],arr[midx]);
	}

}

}
void printselectionSort(int arry[],int size){

for (int i = 0; i < size; ++i)
{
	cout<<" "<<arry[i];
}
cout<<"\n";
}

int main(int argc, char const *argv[])
{
	
  int mydata[]={-2,20,16,11,20,14,25,-2};
  int arrySize= sizeof(mydata)/sizeof(mydata[0]);

selectionSort(mydata,arrySize);
printselectionSort(mydata,arrySize);

	return 0;
}