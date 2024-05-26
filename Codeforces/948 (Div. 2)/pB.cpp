#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        if (a == 1){
            cout << "1" << '\n' << "1" << '\n';
            continue;
        }
        int power2 = 2^int(log(a-1)/log(2)) + 1;
        int arr[power2];
        cout << power2 << '\n';
        for (int j = 0; j < power2; j++){
            arr[j] = 0;
        }
        arr[power2] = 1;
        int diff = a - 2^power2;
        cout << diff << '\n';
        vector<int> v;
        while (diff > 0)
            {
                v.push_back(diff % 2);
                diff = diff / 2;
            }
        for (int j = 0; j < v.size(); j++){
            if (v[j] == 1){
                arr[j] = -1;
            }
        }
        for (int j = 0; j < power2; j++){
            cout << arr[j] << ' ';
        }
        cout << '\n';
    }
}
