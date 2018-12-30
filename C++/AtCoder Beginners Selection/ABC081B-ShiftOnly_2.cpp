#include <iostream>
using namespace std;
int main(){
  int a;
  cin >> a;
  int b[200];
  for(int i = 0; i < a; i++)cin >> b[i];
  int c = 0;
  while(1){
    if(b[c % a] % 2 == 0){b[c % a] = b[c % a] / 2;}
    else{break;}
    c++;
  }
  cout << c / a;
  return 0;
}
