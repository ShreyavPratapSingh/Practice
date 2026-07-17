#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<n;
    cout<<endl;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            (i%2==0^j%2==0)?cout<<"0 ":cout<<"1 ";
        }
        cout<<endl;
    }
    return 0;
}