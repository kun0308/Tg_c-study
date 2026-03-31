#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int arr[10] = {0};
    int count = 0;
    for (int i=0; i<10; i++){
        cin >> arr[i];
        arr[i]%=42;
    }
    for (int i = 0;i<10;i++){
        int sc = 0;
        for(int j= i+1;j<10;j++){
            if (arr[i] == arr[j]){
                sc++;
            }
        }
        if (sc == 0){
            count++;
        }
    }
    cout << count<< endl;
    return 0;
}