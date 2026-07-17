#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cout<<"Enter the number of stars in the largest row of the half pyramid: ";
    cin>>n;
    cout<<n;
    cout<<endl;

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=n-i+1;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}