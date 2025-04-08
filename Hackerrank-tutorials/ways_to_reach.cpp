#include <iostream>
#include <vector>
using namespace std;

int stairs_count(int remaining_stairs, vector<int>& memo) {
    if (remaining_stairs == 1) return 1;
    if (remaining_stairs == 2) return 2;

    // Check if result is already computed
    if (memo[remaining_stairs] != -1) {
        return memo[remaining_stairs];
    }

    // Compute and store result
    memo[remaining_stairs] = stairs_count(remaining_stairs - 1, memo) + stairs_count(remaining_stairs - 2, memo);
    return memo[remaining_stairs];
}

int main() {
    int total_stairs;
    cin >> total_stairs;

    // Initialize memoization array
    vector<int> memo(total_stairs + 1, -1);

    // Call the optimized recursive function
    cout << stairs_count(total_stairs, memo) << endl;
    return 0;
}
