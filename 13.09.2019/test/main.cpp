#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cout<<"Enter Array Size: ";
    cin>>n;

    int a[n+n];

    for(int i = 1; i<=n; i++)
        cin>>a[i];

    cout<<"Rotate how many times (k): ";
    cin>>k;
    int x = n;
    int y = k;
    for(int i = 1; i<=y; i++)
    {
        a[x+i] = a[i];
    }

    cout<<endl<<x<<endl;
    cout<<y;
}
