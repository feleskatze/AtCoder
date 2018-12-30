#include <iostream>
using namespace std;
int main(){
  int n, a, b;
  cin >> n >> a >> b;
  int mil, th, hun, ten, one;
  
  int sum = 0;
  for(int i = 1; i <= n; i++){
    mil = i / 10000;
    th = (i % 10000) / 1000;
    hun = (i % 10000 % 1000) / 100;
    ten = (i % 10000 % 1000 % 100) / 10;
    one = i % 10000 % 1000 % 100 % 10;
    
    int digit_sum = mil + th + hun + ten + one;
    if( a <= digit_sum && digit_sum <= b){
      sum += i;
    }
  }
  
  cout << sum;
  return 0;
}