#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b,a1,b1;
  cin>>a>>b;
  cout<<a.size()<<" "<<b.size()<<endl<<a+b<<endl;
  a1=a[0];
  b1=b[0];
  a.replace(0,1,b1);
  b.replace(0,1,a1);  
  cout<<a<<" "<<b<<endl;
  
    return 0;
}
