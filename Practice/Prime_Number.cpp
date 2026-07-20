#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n;
    bool flag;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<n;
    cout<<endl;
    flag=0;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Non-Prime";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Prime";
    }
    return 0;
}