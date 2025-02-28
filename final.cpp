#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // To store numbers and their indices
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i; // Store the index of the current number
    }
    return {}; // Return an empty vector if no solution is found
}

int main() {
    // Example 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    cout << "Input array: ";
    for (int n : nums1) cout << n << " ";
    cout << "\nTarget: " << target1 << endl;
    vector<int> result1 = twoSum(nums1, target1);
    cout << "Indices: [" << result1[0] << ", " << result1[1] << "]" << endl;
    cout << "Numbers: [" << nums1[result1[0]] << ", " << nums1[result1[1]] << "]\n" << endl;

    // Example 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    cout << "Input array: ";
    for (int n : nums2) cout << n << " ";
    cout << "\nTarget: " << target2 << endl;
    vector<int> result2 = twoSum(nums2, target2);
    cout << "Indices: [" << result2[0] << ", " << result2[1] << "]" << endl;
    cout << "Numbers: [" << nums2[result2[0]] << ", " << nums2[result2[1]] << "]\n" << endl;

    // Example 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    cout << "Input array: ";
    for (int n : nums3) cout << n << " ";
    cout << "\nTarget: " << target3 << endl;
    vector<int> result3 = twoSum(nums3, target3);
    cout << "Indices: [" << result3[0] << ", " << result3[1] << "]" << endl;
    cout << "Numbers: [" << nums3[result3[0]] << ", " << nums3[result3[1]] << "]\n" << endl;

    return 0;
}
