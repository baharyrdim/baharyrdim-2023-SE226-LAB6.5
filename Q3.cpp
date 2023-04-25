#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = sizeof(nums) / sizeof(nums[0]);
    bool isPrime[*max_element(nums, nums + n) + 1];
    fill(isPrime, isPrime + *max_element(nums, nums + n) + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= *max_element(nums, nums + n); i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= *max_element(nums, nums + n); j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (isPrime[nums[i]]) {
            cout << nums[i] << " ";
        }
    }
    return 0;
}
