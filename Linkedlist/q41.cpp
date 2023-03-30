#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int rearrangeDigits(int num) {
    string str = to_string(num);
    sort(str.begin(), str.end());
    int i = 0;
    while (i < str.size() && str[i] == '0') i++;
    if (i > 0 && i < str.size()) {
        swap(str[0], str[i]);
    }
    return stoi(str);
}

int main() {
    int num = 310;
    int result = rearrangeDigits(num);
    cout << result << endl;
    return 0;
}
