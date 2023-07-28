#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
    cin>>str;
    string rev_str;
    for (int i = str.size()-1; i >=0; i--)
    {
    	// rev_str=rev_str+str[i];
    	rev_str.push_back(str[i]);
    }
    cout<<rev_str<<endl;
    if (str==rev_str)
    {
    	cout<<"YES";
    }else{
    	cout<<"NO";
    }

	return 0;
}