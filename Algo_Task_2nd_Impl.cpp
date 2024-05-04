#include <iostream>
#include <vector>

using namespace std;

int max_product_of_three(vector<int> v){

    // sorting the array using bubble sort method to get,
    // the largest elements at the end of the array
    for (int i = 0; i < v.size(); ++i) {
        for (int j = i+1; j < v.size(); ++j) {
            if(v[i] > v[j])
                swap(v[i], v[j]);
        }
    }

    // assigning the logic of getting the max product to the variables needed
    int res, firstTwo = v[0]*v[1], lastThree = v[v.size()-1]*v[v.size()-2]*v[v.size()-3];

    // Ternary operation comparing assigned variables to get the result
    (firstTwo * v[v.size()-1] > lastThree)?
            res = firstTwo * v[v.size()-1]: res = lastThree;

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