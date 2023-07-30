#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   //Write a test cases in two way;
   //first for loop use (but test variable declear extra time and extra memory space)
       //  for (int test= 0; test <= t; ++test) //
   //second is while loop (Condition is {t--}   t?=0 is it's running )
   //Then while loop is best 
   while (t--)
   {
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   }
	return 0;
}