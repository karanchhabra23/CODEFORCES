#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
#define b(i,a,b) for(int i=a;i>b;i--)
#define ll long long 
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    int counter=0;
    for(int first=0;first<2*n;first++)
    {
       cout<<" ";
    }
    cout<<"0"<<endl;
    f(i,1,n+1)
    {
        f(j,0,2*(n-i))
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<k<<" ";
        }
        for(int l=i-1;l>=0;l--)
        {
            if(l>0)
                cout<<l<<" ";
            else
            {
                    cout<<l;
            }
            
        }
        cout<<endl;
    }
    for(int q=n-1;q>0;q--)
    {
        for(int spaces=0;spaces<2*(n-q);spaces++)
            cout<<" ";
        
        for(int p=0;p<=q;p++)
        {   
            cout<<p<<" ";
        }
        for(int g=q-1;g>=0;g--)
        {
            if(g>0)
                cout<<g<<" ";
            else
            {
                    cout<<g;
            }
            
        }
        cout<<endl;
    }
    for(int last=0;last<2*n;last++)
    {
        cout<<" ";
    }
    cout<<"0";
}
