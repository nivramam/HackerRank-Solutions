#include<bits/stdc++.h>
#include<vector>
using namespace std;


int findMaximum(vector<int> sub)
{
        sort(sub.begin(),sub.end());
        return sub[sub.size()-1];
}

void printArray(vector<int> pr)
{
        for(int i=0;i<pr.size();i++)
        {
                cout<<pr[i]<<" ";
        }
}

void performSliding(vector<int> myArray, int winsize)
{
        vector<int> c;
        int size = myArray.size();
        for(int i=0;i<size;i++)
        {
                vector<int> subarray;
                for(int trav = i; trav<=i+winsize-1;trav++)
                {
                        subarray.push_back(myArray[trav]);
                }
                int max = findMaximum(subarray);
                c.push_back(max);
        }
        printArray(c);
}
int main()
{
        vector<int> a;
        int n,x,winsize;
        cout<<"Enter size of array and target number!\n";
        cin>>n>>winsize;
        for(int i=0;i<n;i++)
        {
                cin>>x;
                a.push_back(x);
        }
        cout<<"Let's perform the sliding window on this array...!\n";
        performSliding(a,winsize);
        return 0;
}
