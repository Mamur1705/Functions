#include <iostream>
#include "cmath"
using namespace std;
// Problem 2
string reverseString(string s, int i, int j) {
    if(i>=j) {
        return s;
    }
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    return reverseString(s, i+1, j-1);
}
// Problem 3
void descending(double arr[], int n) {
    double temp;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[j]>arr[i]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

}
// Problem 4

int main() {
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    descending(arr,n);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }


    // string s;
    // getline(cin, s);
    // int j=s.length()-1;
    // char temp;
    // s=reverseString(s, 0, j);
    // cout<<s<<endl;
}