#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    string s;
    char temp;
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin >> a >> s;
        const int length = s.length();
        char* char_array = new char[length + 1];
        strcpy(char_array, s.c_str());
        sort(char_array, char_array + length);
        int n2 = length - 1;
        for (int j = 0; j < length/2; ++j){
             temp = char_array[i];
             char_array[i] = char_array[n2];
             char_array[n2] = temp;
             --n2;
        }
        cout << char_array << endl;
    }
}
