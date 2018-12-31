#include <iostream>
using namespace std;
int main(){
  int num, sum;
  cin >> num >> sum;
  
  int teth, fth, th;
  
  for(th = 0; th <= num; th++){
    for(fth = 0; fth <= num - th; fth++){
      teth = num - ( th + fth );
      if(10000*teth + 5000*fth + 1000*th == sum){
        cout << teth << " "<< fth << " " << th;
        return 0;
      }
    }
  }
  teth = -1; fth = -1; th = -1;
  cout << teth << " "<< fth << " " << th;
  return 0;
}
