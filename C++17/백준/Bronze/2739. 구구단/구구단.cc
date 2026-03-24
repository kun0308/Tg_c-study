#include <iostream>

using namespace std;

int main(void){
    int y;
    cin >> y;
    if (y>= 1 && y<=9){
        for (int i=1; i<=9 ; i++){
            cout << y << " * " << i <<" = " << (y*i)<<endl;
    }
    }
    return 0;
}