#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6};
    std::sort(nums.begin(), nums.end()); // Ensure the sequence is sorted to start with the smallest permutation

    int K = 10; // For demonstration, let's assume you want the first 10 permutations
    for (int i = 0; i < K && std::next_permutation(nums.begin(), nums.end()); ++i) {
        for (int num : nums) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
