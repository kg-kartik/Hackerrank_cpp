#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,q,i,x,j,size,y,z;
    cin>>n>>q;
    vector<int> v[n];
    for(i=0;i<n;i++)
    {
        cin>>size;
        for(j=0;j<size;j++)
        {
            cin>>x;
            v[i].push_back(x);
        }        
    }
    for(i=1;i<=q;i++)
    {
        cin>>y>>z;
        cout<<v[y][z]<<endl;
    }
    return 0;
}
