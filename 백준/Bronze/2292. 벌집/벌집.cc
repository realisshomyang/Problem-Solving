#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int i=1;
  int cnt = 1;
  while(n > i){
    i += (6 * cnt);
    cnt++;
  }
  cout << cnt;
}