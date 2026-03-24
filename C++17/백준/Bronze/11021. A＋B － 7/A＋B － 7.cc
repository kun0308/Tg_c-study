#include <iostream>

using namespace std;

int main(void){
    int y,a,b;
    cin >> y;
    
    for (int i =1; i<= y; i++){
        cin >> a >> b;
        cout << "Case #"<< i << ": "<< (a+b)<< endl;
    }
    return 0;
}