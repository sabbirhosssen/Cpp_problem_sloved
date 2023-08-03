 #include<bits/stdc++.h>
using namespace std;
int main()
{
    //stick cut the three, part of the 4;
    //pasha like a rectangles, don't like square

    // rectangles stick part=LLWW;
    // rectangles=2(l+w)
    //then
    //rectangles/2=l+w;

    int n;
    cin>>n;
    if (n%2){
        cout<<0; return 0;
    }
    n/=2;
    if (n%2)
    {
      cout<<n/2;  
    }else{
        cout<<(n/2-1);
}

    return 0; 
}