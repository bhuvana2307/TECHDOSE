class Solution {
    public int findKthLargest(int[] nums, int k) {
        return quicksort(nums, 0, nums.length - 1, k);
    }

    public int quicksort(int[] nums, int l, int h, int k) {
        if (l <= h) {
            int p = partition(nums, l, h);
            if (k - 1 < p) {
                return quicksort(nums, l, p - 1, k);
            } else if (k - 1 > p) {
                return quicksort(nums, p + 1, h, k);
            } else {
                return nums[p];
            }
        }
        return -1; // Return value doesn't matter since it won't reach here for valid input.
    }

    public int partition(int[] nums, int l, int h) {
        int pivot = nums[h];
        int i = l - 1;
        for (int j = l; j < h; j++) {
            if (nums[j] > pivot) {
                i++;
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        int temp = nums[i + 1];
        nums[i + 1] = nums[h];
        nums[h] = temp;
        return i + 1;
    }
}
