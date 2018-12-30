#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int card_num;
  int ai[100]  = {};
  cin >> card_num;
  for(int i = 0; i < card_num; i++) cin >> ai[i];

  sort(ai, ai + card_num, greater<int>());

  int alice = 0;
  int bob = 0;
  for(int i = 0; i < card_num; i++){
    i % 2 == 0 ? alice += ai[i] : bob += ai[i];
  }

  cout << alice - bob;
  
  return 0;
}