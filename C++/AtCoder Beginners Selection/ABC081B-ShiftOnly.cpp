#include <iostream>
using namespace std;
int main(){
  int a;
  cin >> a;
  int b[200];
  for(int i = 0; i < a; i++)cin >> b[i];
  int counter = 0;
  int loop = 0;
  while(1){
    if(b[loop] % 2 == 0){b[loop] = b[loop] / 2;}
    else{break;}
    loop++;
    if(loop == a){
      loop = 0;
      counter++;
    }
  }
  cout << counter;
  return 0;
}
