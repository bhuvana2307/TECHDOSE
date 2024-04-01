public static int[] subarrayWithGivenSum(int[] arr, int targetSum) {
        int n = arr.length;
        int left = 0, right = 0;
        int currentSum = 0;

        while (right < n) {
            currentSum += arr[right];

            while (currentSum > targetSum) {
                currentSum -= arr[left];
                left++;
            }

            if (currentSum == targetSum) {
                int[] result = Arrays.copyOfRange(arr, left, right + 1);
                return result;
            }

            right++;
        }

        return null;
    }
