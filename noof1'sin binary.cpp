#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    int n,e=0,i,len;
    cout<<"enter the no"<<endl;
    cin>>n;
    string bin="";
    char c,d;
    while(n>0)
    {
        if(n%2==0)
        c='0';
        else
        c='1';
        bin=bin+c;
        n=n/2;
        
    }
    reverse(bin.begin(),bin.end());
    len=bin.length();
    for(i=0;i<len;i++)
    {
        d=bin.at(i);
        if(d=='1')
        e=e+1;
        
    }
    cout<<"the no of 1s="<<e;
}
