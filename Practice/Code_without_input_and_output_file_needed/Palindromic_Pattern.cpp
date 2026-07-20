#include<iostream>
using namespace std;

int main()
{
    int n,t;
    cout<<"Enter the number in the lowest row: ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        t=n-i;
        for(int j=1;j<=t;j++)
        {
           cout<<"  ";
        }
        for(int k=1;k<=((2*i)-1);k++)
        {
            if(k<=i)
            {
                cout<<(i-k+1)<<" ";
            }
            else
            {
                cout<<k-i+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}