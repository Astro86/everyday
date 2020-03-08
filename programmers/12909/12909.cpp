#include <iostream>
#include <string>

using namespace std;

bool solution(string s) {
    if (s[0] == ')') {
        return false;
    }

    int open = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            open++;
        } else {
            if (open == 0) {
                return false;
            } else {
                open--;
            }
        }
    }

    if (open == 0)
        return true;
    else {
        return false;
    }
}

int main(void) {
    string s;
    cin >> s;
    bool isTrue = solution(s);
    if (isTrue) {
        cout << "true" << '\n';
    } else {
        cout << "false" << '\n';
    }

    return 0;
}