#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int size,a;
    cin>>size;
    vector<int> v; 
    int i;
    for(i=0;i<size;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    for (auto i = v.begin(); i != v.end(); ++i) {
        cout << *i << " "; 
    }
}
