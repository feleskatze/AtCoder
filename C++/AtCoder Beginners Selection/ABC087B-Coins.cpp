#include <iostream>
using namespace std;
int main(){
  int fh, h, f, sum; 
  cin >> fh;
  cin >> h;
  cin >> f;
  cin >> sum;
  
  int num = 0;
  for(int fh_i = 0; fh_i <= fh; fh_i++){
    for(int h_i = 0; h_i <= h; h_i++){
      for(int f_i = 0; f_i <= f; f_i++){
        if( 500*fh_i + 100*h_i + 50*f_i == sum) num++;
      }
    }
  }
  
  cout << num;
  return 0;
}