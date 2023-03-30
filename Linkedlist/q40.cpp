#include <iostream>
#include <vector>
using namespace std;

bool checkPossibility(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i-1]) {
            count++;
            if (count > 1)
                return false;
            if (i >= 2 && nums[i] < nums[i-2])
                nums[i] = nums[i-1];
        }
    }
    return true;
}

int main() {
    vector<int> nums = {4, 2, 3};
    if (checkPossibility(nums))
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}
