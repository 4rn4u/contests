#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    for (int i = 0; i<n; ++i){
        int a; cin >> a;
        int arr[a];
        for (int j = 0; j<a; ++j){
             cin >> arr[i];
        }
        sort(arr, arr+a);

    }
}
