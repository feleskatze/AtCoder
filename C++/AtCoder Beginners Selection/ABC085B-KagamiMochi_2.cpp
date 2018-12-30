#include <iostream>
#include <set>
using namespace std;
int main(){
  int num;
  cin >> num;
  set<int> size;
  for(int i = 0; i < num; i++){
    int tmp;
    cin >> tmp;
    size.insert(tmp);
  }
  
  cout << size.size();
    
  return 0;
}