#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,n,a[3500],t,s=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n-1;i++)
    {
        t=abs(a[i]-a[i+1]);
        if(t<1 || t>=n)
        {
            s=5;
            break;
        }
    }
    if(s==5)
    {
        cout << "Not jolly" << endl;
    }
    else
    {
        cout << "Jolly" << endl;
    }
    return 0;
}
