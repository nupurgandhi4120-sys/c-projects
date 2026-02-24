#include <bits/stdc++.h>
using namespace std;

int countSubarrays(vector& nums) {
int n = nums.size();
int count = 0;
for (int i = 0; i < n - 2; i++) {
if (nums[i + 1] > nums[i] && nums[i + 1] > nums[i + 2]) {
count++;
}
}
return count;
}

int main() {
vector nums = {1, 2, 1, 4, 1}; // example input
cout << countSubarrays(nums) << endl;
return 0;
}`

