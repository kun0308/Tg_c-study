#include <iostream>
#include <string>
using namespace std;

class Stack{
private:
    int index = -1;
    int n;
    int arr[10000];
public:
    void push(int n){
        index++;
        arr[index] = n;
        
    }
    void pop(){
        if (index < 0){
            cout << -1 <<endl;
        }
        else {
            cout << arr[index] <<endl;
            index--;
        }
    }
    void top(){
        if (index < 0){
            cout << -1 <<endl;
        }
        else cout << arr[index] << endl;
    }
    void size(){
        cout << index+1 << endl;
    }
    void empty() {
        if (index < 0){
            cout << 1 <<endl;
        }
        else cout << 0 << endl;
    }
    
};
int main(void) {
    Stack stk;
    string S;
    int count = 0;
    int num = 0;
    cin >> count;
    for (int i = 0; i<count; i++){
        cin >> S;
        if (S == "push") {
            cin >> num; 
            stk.push(num);
        
    }
        else if(S == "pop"){
            stk.pop();
        }
        else if(S == "top"){
            stk.top();
        }
        else if(S == "empty"){
            stk.empty();
        }
        else if(S == "size"){
            stk.size();
        }
        
    }
    return 0;
}