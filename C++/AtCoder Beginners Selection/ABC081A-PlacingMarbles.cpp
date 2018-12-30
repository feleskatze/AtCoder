#include <iostream>
using namespace std;
int main(){
  int a;
  cin >> a;
  int res = 0;
  if(a / 100 == 1)res++;
  if((a % 100) / 10 == 1)res++;
  if((a % 10) == 1)res++;
  cout << res;
  return 0;
}