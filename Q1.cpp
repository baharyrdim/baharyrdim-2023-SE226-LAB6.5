#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    unordered_set<int> set1(nums1, nums1 + n1);
    for (int i = 0; i < n2; i++) {
        if (set1.erase(nums2[i]) > 0) {
            cout << nums2[i] << " ";
        }
    }
    return 0;
}
