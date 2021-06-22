// You are using GCC
#include<bits/stdc++.h>
using namespace std;

char getSecondMostFrequent(string a)
{
    int count[256] = {0}, i;
    for(i=0; a[i]; i++)
    {
        (count[a[i]])++;
    }
    int firstF = 0, secondF = 0;
    for(i=0; i<256; i++)
    {
        if(count[i] > count[firstF])
        {
            secondF = firstF;
            firstF = i;
        }
        else if( count[i] > count[secondF] && count[i]!=count[firstF])
            secondF = i;
    }
    return secondF;
}

int main()
{
    string a;
    cin>>a;
    // cout<<a;
    char secondMost = getSecondMostFrequent(a);
    cout<<secondMost;
    return 0;
}
