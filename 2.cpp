#include<iostream>
using namespace std;
int main()
{
    long long int n,t,k,h;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n--;
        }
    }
    cout << n;


    return 0;
}

