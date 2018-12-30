#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int num;
  cin >> num;
  int size[100] = {};
  for(int i = 0; i < num; i++)cin >> size[i];
  sort(size, size + num);
  for(int i = 0; i < num; i++){
    if(size[i] == size[i + 1]) size[i] = 0;
  }
  int res = 0;
  for(int i = 0; i < num; i++) if(size[i] != 0) res++;
  
  cout << res;
    
  return 0;
}