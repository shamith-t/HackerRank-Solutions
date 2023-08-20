#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;
    cin>>n;
    cin>>q;
    vector<vector<int>> arr(n);

    for(int i=0;i<n;i++){
      int k;
      cin>>k;
      for(int j=0;j<k;j++){
        int data;
        cin>>data;
        arr[i].push_back(data);
      }
    }
    
    for(int l=0;l<q;l++){
      int i,j;
      cin>>i>>j;
      cout<<arr[i][j]<<endl;
    }
       
    return 0;
}
