#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int arr[26] = {0};
    string s;
    cin >> s;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (char c: s){
        arr[c-'a']++;
    }
    for (int i=0;i<size; i++){
        cout << arr[i];
        if (i!=size-1){
            cout << " ";
        }
    }
    return 0;
}