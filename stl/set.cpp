#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int i,q,n,j,x;
    int arr[2];
    set<int>s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>arr[j];
        }
        s.insert(x);
        if(arr[0]==1) {
            s.insert(arr[1]);
        }
        else if(arr[0] == 2) {
            s.erase(arr[1]);
        }
        else {
            set<int>::iterator it =s.find(arr[1]);
            if(it != s.end()){
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}



