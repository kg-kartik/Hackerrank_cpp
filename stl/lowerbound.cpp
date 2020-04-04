#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int n,a,q,i,value;
   cin>>n;
   vector<int> v;
   for(i=0;i<n;i++)
   {
       cin>>a;
       v.push_back(a);
   }
    cin>>q;
    int arr[q];
    for(i=0;i<q;i++)
    {
        cin>>value;
        vector<int>::iterator low = lower_bound(v.begin(),v.end(),value);
        if(v[low-v.begin()]==value)
        {
            cout<<"Yes"<<" "<<(low - v.begin()+1)<<endl;
        }
        else {
            cout<<"No"<<" "<<(low - v.begin()+1)<<endl;
        }       
    }
    return 0;
}
