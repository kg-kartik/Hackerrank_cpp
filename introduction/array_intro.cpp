#include <vector>
#include<algorithm>
#include <iostream>
using namespace std;

int main() {
    int n,i,x;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    reverse(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
