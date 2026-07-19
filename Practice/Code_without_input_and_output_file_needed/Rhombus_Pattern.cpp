#include<iostream>
using namespace std;

int main()
{
    int n,t;
    cout<<"Enter the number of stars in the side of rhombus: ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
      t=n-i;
      for(int j=1;j<=n+t;j++)
      {
        if(j<=t)
        {
          cout<<" ";
        }
        else
        {
          cout<<"* ";
        }
      }
      cout<<endl;
    }
    return 0;
}