#include <bits/stdc++.h>
using namespace std;

void insertionSort(int data[],int size){
for (int insert = 0; insert < size; ++insert)
{
	int temp=data[insert];
	int insertion =insert-1;
	for( ;insertion>=0&&data[insertion]>temp; )
	{
		data[insertion+1]=data[insertion];
		insertion--;
	}
	data[insertion+1]=temp;
}

}
void printInsertionSort(int data[],int size){

for (int i = 0; i < size; ++i)
{
	cout<<" "<<data[i];
}
cout<<"\n";
}

int main(int argc, char const *argv[])
{
	
  int mydata[]={-2,20,16,11,20,14,25,-3};
  int arrySize= sizeof(mydata)/sizeof(mydata[0]);

insertionSort(mydata,arrySize);
printInsertionSort(mydata,arrySize);

	return 0;
}