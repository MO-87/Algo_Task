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
```
## 2nd Algorithm Explanation: Maximum Product of Three Numbers (#2)

This algorithm aims to find the maximum product that can be obtained by multiplying three integers from a given vector `v`.

### Algorithm Steps:

1. **Sorting the Array:** The algorithm begins by sorting the input vector `v` using the Bubble Sort method. This sorting operation places the largest elements towards the end of the array.

2. **Calculating Potential Maximum Products:**
   - After sorting, the algorithm calculates two potential maximum products:
     - `firstTwo`: The product of the first two elements of the sorted array.
     - `lastThree`: The product of the last three elements of the sorted array.

3. **Determining the Maximum Product:**
   - A ternary operation is used to compare the products obtained from `firstTwo * v[last]` and `lastThree`, where `last` represents the last index of the vector. The result of this comparison determines the maximum product.

4. **Returning the Result:** Finally, the algorithm returns the maximum product obtained.

### Complexity Analysis:

- **Time Complexity:** O(n^2) - The algorithm utilizes a Bubble Sort implementation to sort the input vector, resulting in quadratic time complexity. The subsequent operations to calculate the maximum product take linear time, thus not significantly contributing to the overall time complexity.
  
- **Space Complexity:** O(1) - The algorithm does not require any additional space that grows with the input size. Only a constant amount of space is used for variables such as `res`, `firstTwo`, and `lastThree`.

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
