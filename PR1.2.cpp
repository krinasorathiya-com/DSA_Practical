#include<iostream>
#include<unordered_map>
using namespace std;
void FindDuplicate(int log[],int n)
{
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        freq[log[i]]++;
    }
    cout<<"Restock items are: ";
    for(auto& entry: freq)
    {
        if(entry.second>1)
        {
            cout<<entry.first<<" ";
        }
    }
}
int main(){
    int log[]={101,134,154,101,134,200,300,400,500};
    int n=7;
    FindDuplicate(log,n);
}
