#include <iostream>
#include "cmath"
using namespace std;
int main() {
    double var;
    cin>>var;
    cout<<&var<<endl;
    double *ptr=&var;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
}