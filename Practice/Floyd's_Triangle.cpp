#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n,t;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    cout<<n;
    cout<<endl;
    t=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        { 
            cout<<t<<" ";
            t+=1;
        }
        cout<<endl;
    }
    return 0;
}