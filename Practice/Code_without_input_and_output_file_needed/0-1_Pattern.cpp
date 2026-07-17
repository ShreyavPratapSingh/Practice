#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
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