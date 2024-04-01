vector<int> subarrayWithGivenSum(vector<int>& arr, int targetSum) {
    int n = arr.size();
    int left = 0, right = 0;
    int currentSum = 0;

    while (right < n) {
        currentSum += arr[right];

        while (currentSum > targetSum) {
            currentSum -= arr[left];
            left++;
        }

        if (currentSum == targetSum) {
            vector<int> result(arr.begin() + left, arr.begin() + right + 1);
            return result;
        }

        right++;
    }

    return vector<int>();
}
