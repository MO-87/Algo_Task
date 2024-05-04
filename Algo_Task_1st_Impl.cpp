#include <iostream>
#include <vector>

using namespace std;

int max_product_of_three(vector<int> v){

    // Assigning the most minimum int value to the res variable
    int res = INT_MIN;

    // looping through all possible combinations that could achieve what is requested,
    // to find the three elements that could be the max product
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v.size(); ++j) {
            for (int k = 0; k < v.size(); ++k) {

                // skipping repeated elements to avoid redundancy in the calculation
                if(v[i]==v[j] || v[i]==v[k] || v[j]==v[k])continue;

                // Ternary operation to get the result
                (v[i]*v[j]*v[k] > res)? res = v[i]*v[j]*v[k]: 0 ;

            }
        }
    }
    // returning the result
    return res;
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