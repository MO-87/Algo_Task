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
```

## Algorithm Explanation: Maximum Product of Three Numbers (Using Recursion)

This algorithm aims to find the maximum product that can be obtained by multiplying three integers from a given vector `v` using a recursive approach.

### Functions:

1. **get_max:** This function takes two integers `a` and `b` as input and returns the maximum of the two.

2. **max_product_of_three:** This function calculates the maximum product of three numbers from the input vector `v` using recursion.

### Algorithm Steps:

1. **Base Case:** If the size of the input vector `v` is less than 3, the function returns 1, as it's not possible to find a product with less than three numbers.

2. **Check Combinations:** Before computing the product for a combination of indices (represented by `first`, `second`, and `third`), the function checks if this combination has already been computed. This optimization avoids redundant calculations.

3. **Calculate Current Product:** The function computes the product of the three elements at indices `first`, `second`, and `third`.

4. **Update Maximum Product:** It compares the current maximum product (`curMax`) with the newly calculated product and updates `curMax` if necessary using the `get_max` function.

5. **Recursive Calls:** The function makes recursive calls to explore different combinations by incrementing indices `first`, `second`, and `third` appropriately.

6. **Store Computed Values:** After computing the maximum product for a combination, the function stores the result in an unordered map (`combinations`) to avoid recalculating it for the same combination.

7. **Return Maximum Product:** Finally, the function returns the maximum product found.

### Complexity Analysis:

- **Time Complexity:** The time complexity of this algorithm is exponential, specifically O(3^n), where 'n' is the size of the input vector `v`. This is because at each step of the recursion, there are three recursive calls exploring different combinations, leading to a total of 3^n recursive calls. Despite the memoization of computed combinations, the total number of recursive calls remains exponential.

- **Space Complexity:** The space complexity is O(n) due to the space used by the unordered map `combinations` to store computed combinations.

### Example Usage:

```cpp
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function declarations
int get_max(int a, int b);
int max_product_of_three(vector<int> v, int first = 0, int second = 1, int third = 2, unordered_map<string, int> combinations = {});

int main() {
    // Example usage
    vector<int> nums = {1, 2, 3, 4, 5};
    int maxProduct = max_product_of_three(nums);
    cout << "Maximum Product of Three Numbers: " << maxProduct << endl;
    return 0;
}
```

## Pseudo Code for 1st Algo :

```
algorithm max_product_of_three(v):
    res = -∞

    for i from 0 to v.size() - 1:
        for j from 0 to v.size() - 1:
            for k from 0 to v.size() - 1:
                if v[i] == v[j] or v[i] == v[k] or v[j] == v[k]:
                    continue

                if v[i] * v[j] * v[k] > res:
                    res = v[i] * v[j] * v[k]

    return res
```

## Pseudo Code for 2nd Algo :

```
algorithm max_product_of_three(v):
    for i from 0 to v.size() - 1:
        for j from i+1 to v.size() - 1:
            if v[i] > v[j]:
                swap(v[i], v[j])

    firstTwo = v[0] * v[1]
    lastThree = v[v.size() - 1] * v[v.size() - 2] * v[v.size() - 3]

    if firstTwo * v[v.size() - 1] > lastThree:
        res = firstTwo * v[v.size() - 1]
    else:
        res = lastThree

    return res
```
