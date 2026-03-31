#include <iostream>
using namespace std;

int main(void) {
    int N, M, i, j, temp; // N = 박스의 개수, M = 이동할 횟수, i = 대상 박스, j = 교환할 박스
    cin >> N >> M;
    int arr[N];
    for (int k=0; k<N; k++){
        arr[k] = k+1;
    }
    for (int l=0; l<M; l++){
        cin >> i >> j;
        temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }
    for (int k = 0; k<N; k++){
        cout << arr[k];
        if (k!=N-1) cout << " ";
    }
    return 0;
}