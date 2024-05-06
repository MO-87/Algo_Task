#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int get_max(int a, int b){
    int res;
    (a > b)? res = a: res = b;
    return res;
}

int max_product_of_three(vector<int> v, int first = 0, int second = 1, int third = 2, unordered_map<string, int> combinations = {}) {
    // Base case: if the array length is less than 3, return 1
    if (v.size() < 3) {
        return 1;
    }

    // Check if the combination is already computed
    string key = to_string(first) + to_string(second) + to_string(third);
    if (combinations.find(key) != combinations.end()) {
        return combinations[key];
    }

    // Calculate the current product
    int curMax = INT_MIN;
    int maxCurrentProduct = v[first] * v[second] * v[third];
    curMax = get_max(curMax, maxCurrentProduct);

    // Recursive calls to explore different combinations
    if (third + 1 != v.size()) {
        int value = max_product_of_three(v, first, second, third + 1, combinations);
        curMax = get_max(curMax, value);
    }
    if (second + 1 != third && second + 1 != v.size()) {
        int value = max_product_of_three(v, first, second + 1, third, combinations);
        curMax = get_max(curMax, value);
    }
    if (first + 1 != second && first + 1 != v.size()) {
        int value = max_product_of_three(v, first + 1, second, third, combinations);
        curMax = get_max(curMax, value);
    }

    // Store the computed value in the combinations map
    combinations[key] = curMax;

    return curMax; // Return the maximum product found
}

int main() {

    // declaring a vector that will provide us with a dynamic size array in cpp
    vector<int> v; int n;

    // keep taking input from the user until he types "Enter" button -> new line ( \n )
    while (true){
        cin >> n;
        v.push_back(n);
        if(getchar()=='\n'){
            break;
        }
    }

    // printing the result of our algo
    cout << max_product_of_three(v);

    return 0;
}
