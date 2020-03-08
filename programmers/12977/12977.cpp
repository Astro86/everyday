#include <iostream>
#include <vector>
using namespace std;

bool check[100000];
int N;
vector<int> arr;

void chooseNum(int index, int depth, int sum) {
    if (depth == 3) {
        if (check[sum] == false) {
            N++;
        }
        return;
    }

    for (int i = index; i < arr.size(); i++) {
        chooseNum(i + 1, depth + 1, sum + arr[i]);
    }
}

int solution(vector<int> nums) {
    int answer = -1;
    arr = nums;

    for (int i = 2; i * i <= 100000; i++) {
        for (int j = 2; i * j <= 100000; j++) {
            check[i * j] = true;
        }
    }
    N = 0;
    chooseNum(0, 0, 0);
    answer = N;
    return answer;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << solution(v) << '\n';
    return 0;
}