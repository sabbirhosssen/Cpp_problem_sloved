#include<bits/stdc++.h>
using namespace std;
int main()
{

  int N;
  cin>>N;
   int A[N];
   
  for (int i = 0; i < N; ++i)
  {
      cin>>A[i];
  }

  

  int i= 0;
  int j=N-1;

  while ( i<N/2)
  {
      int temp = A[i];
      A[i]=A[j];
      A[j]=temp;
      i++;
      j--;
  }


  for (int j = 0; j < N; ++j)
  {
      cout<<A[j]<< " ";
  }
	return 0;
}