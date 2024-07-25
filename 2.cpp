#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int avg=0;
    vector <int> v;
    for(int i=0;i<n;i++) {
        int ele;
        cin>>ele;
        v.push_back(ele);
        avg+=ele;
    }
    return avg/n;
}
