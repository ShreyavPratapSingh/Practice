#include<iostream>
using namespace std;

int main()
{
    int n,t;
    cout<<"Enter Number of Rows: ";
    cin>>n;
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