#include <iostream>
using namespace std;

int main(void) {
    int a;
    
    cin >> a ;
    int arr[a];
    for(int j = 0; j < a; j++){
        cin >> arr[j];
    }    
    int min = arr[0], max = arr[0];
    for(int i=0; i< a; i++){
        if (arr[i] < min ) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
        
    }
    cout << min << " " << max << endl;
    return 0;
}