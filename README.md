# Algo_Task
A brief but mandatory documentation for my algo task at uni.

## 1st Algorithm Explanation: Maximum Product of Three Numbers (#1)

This algorithm aims to find the maximum product that can be obtained by multiplying three distinct integers from a given vector `v`.

### Algorithm Steps:

1. Initialize a variable `res` with the minimum integer value possible (`INT_MIN`).
   
2. Utilize three nested loops to iterate through all possible combinations of three elements from the vector `v`.
   
3. Within the nested loops, ensure that the elements selected are distinct to avoid redundancy in calculations.
   
4. Calculate the product of the current combination of elements and compare it with the current maximum product stored in `res`.
   
5. If the product of the current combination is greater than the current maximum product (`res`), update `res` with the new maximum product.
   
6. Continue iterating through all possible combinations until all combinations have been considered.

7. Finally, return the maximum product (`res`) obtained from the iterations.

### Complexity Analysis:

- Time Complexity: O(n^3) - where 'n' is the size of the input vector `v`. This is due to the three nested loops iterating through all possible combinations.
  
- Space Complexity: O(1) - There is no additional space used that grows with the input size. Only a constant amount of space is required for variables such as `res`.

### Example Usage:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-1, 2, -6, 4, -15};
    int maxProduct = max_product_of_three(nums);
    cout << "Maximum Product of Three Numbers: " << maxProduct << endl;
    return 0;
}
