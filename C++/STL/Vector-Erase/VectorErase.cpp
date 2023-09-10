#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,a,b;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      v.push_back(x);
    }
    cin>>k;
    cin>>a>>b;
    v.erase(v.begin()+k-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for (auto i=v.begin();i!=v.end();++i){
      cout<<*i<<" ";
    }
    return 0;
}
