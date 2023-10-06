
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // char aaa[100];
    // // cin>>aaa;
    // gets(aaa);

    // cout<<aaa;

    int n;
    cin>>n;

    string sent[n];
    for (int i=0; i<n; i++)
    {
        cin>>sent[i];
    }
    for (int i=0; i<n; i++)
    {
        cout<<sent[i]<<" ";
    }
    return 0;
}
