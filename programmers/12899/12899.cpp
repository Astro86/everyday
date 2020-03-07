#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    stack<string> st;
    string result = "";

    while (n) {
        int reminder = n % 3;

        if (reminder == 0) {
            st.push("4");
            n = (n / 3) - 1;
        } else {
            if (reminder == 1) {
                st.push("1");
            } else if (reminder == 2) {
                st.push("2");
            }
            n /= 3;
        }
    }

    int size = st.size();
    for (int i = 0; i < size; i++) {
        result += st.top();
        st.pop();
    }
    return result;
}