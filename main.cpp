#include <iostream>
#include "cmath"
using namespace std;
double series(int n){
  if(n==0) {
    return 2.0/3;
  }
  return pow(-1, n)*(n+2)/3.0+series(n-1);
}
int main() {
  cout<<series(2)<<endl;
}