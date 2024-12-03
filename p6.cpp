#include <iostream>
#include "cmath"
using namespace std;
void prime(int &n) {
    for(int i=2; i<sqrt(n); i++) {
        if(n%i==0) {
            n=n*n*n;
            return;
        }
    }
    n*=n;
}
int main() {
    int n;
    cin>>n;
    prime(n);
    cout<<n<<endl;
}