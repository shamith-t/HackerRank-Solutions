#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
  stringstream ss(str);
  char com;
  vector<int> ints;
  int num;
  while(ss>>num){
    ints.push_back(num);
    ss>>com;  
  }
  return ints;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
