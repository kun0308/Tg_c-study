#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N,M;//N = 변수의 개수, M = 최고성적
    cin >> N;
    double arr[N];
    double average = 0;
    for (int i = 0; i< N; i++){
        cin >> arr[i];
    }
    
    M = arr[0];
    for (int i=i;i<N;i++){
        if (M < arr[i]){
            M = arr[i];
        }
    }
    for (int i=0;i<N;i++){
        arr[i] = arr[i]/M*100;
        average +=arr[i];
    }
    average/=N;
    cout << average;
    return 0;
}