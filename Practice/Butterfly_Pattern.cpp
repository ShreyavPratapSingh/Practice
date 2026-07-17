#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
   
    int n,t;
    cout<<"Enter the number for specific butterfly pattern: ";
    cin>>n;
    cout<<n;
    cout<<endl;
    t=(2*n)-1;
    for(int i=1;i<=2*n;i++)
    {
       if(i<=n)
      {
        for(int j=1;j<=(2*n);j++)
       {
        if(j<=((2*n)-t)||j>t)
        {
            cout<<"* ";
        }
        else if(j>(2*n)-t||j<t)
        {
            cout<<"  ";
        }
       }
         cout<<endl;
         t-=1;
      }
    else
    {
    for(int j=2*n;j>=1;j--)
    {
       if(j<=(2*n)-t-1||j>t+1)
       {
            cout<<"* ";
       }
       else
       {
            cout<<"  ";
       }
    }
    cout<<endl;
    t+=1;
  }
 }
   return 0;
}