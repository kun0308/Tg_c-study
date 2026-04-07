#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Member {
    int age;
    string name;
};

bool compare(const Member& a, const Member& b) {
    return a.age < b.age;
}

int main(void) {
    int n;
    cin >> n;
    vector<Member> members(n);

    //입력
    for (int i = 0; i < n; i++) {
        cin >> members[i].age >> members[i].name;
    }

    stable_sort(members.begin(), members.end(), compare);

    //출력
    for (int i = 0; i < n; i++) {
        cout << members[i].age << " " << members[i].name << endl;
    }

    return 0;
}