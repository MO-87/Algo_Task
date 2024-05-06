function max_product(arr) {
    if (arr.length < 3) {
        return 1;
    }

    function get_max(a, b){
        return (a > b)? a : b;
    }

    const combinations = {};
    function findMaxProduct(
        first = 0,
        second = 1,
        third = 2,
        curMax = -Infinity
    ) {


        // Calculate the current product
        let maxCurrentProduct = arr[first] * arr[second] * arr[third];

        // Update curMax with the maximum product found so far
        curMax = get_max(curMax, maxCurrentProduct);

        // Recursive calls to explore different combinations
        if (
            !combinations["" + first + second + (third + 1)] &&
            third + 1 !== arr.length
        ) {
            const value = findMaxProduct(first, second, third + 1, curMax);
            combinations["" + first + second + (third + 1)] = value;
            curMax = get_max(curMax, value);
        }
        if (
            second + 1 !== third &&
            !combinations["" + first + (second + 1) + third] &&
            second + 1 !== arr.length
        ) {
            const value = findMaxProduct(first, second + 1, third, curMax);
            combinations["" + first + (second + 1) + third] = value;

            curMax = get_max(curMax, value);
        }
        if (
            first + 1 !== second &&
            !combinations["" + (first + 1) + second + (third + 1)] &&
            first + 1 !== arr.length
        ) {
            const value = findMaxProduct(first + 1, second, third, curMax);
            combinations["" + (first + 1) + second + (third + 1)] = value;
            curMax = get_max(curMax, value);
        }
        return curMax; // Return the maximum product found
    }
    const max = findMaxProduct();

    return max;
}