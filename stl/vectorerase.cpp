#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,i,x,a,b,y;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>y;
        v.push_back(y);
    }
    cin>>x>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    int size = v.size();
    cout<<size<<endl;
    for(auto i=v.begin(); i != v.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
