class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int l = 0, h = nums.size() - 1;
        while (l <= h) {
            int p = partition(nums, l, h);
            if (k - 1 < p) {
                h = p - 1;
            } else if (k - 1 > p) {
                l = p + 1;
            } else {
                return nums[p];
            }
        }
        return -1; // Return value doesn't matter since it won't reach here for valid input.
    }

    int partition(vector<int>& nums, int l, int h) {
        int pivot = nums[h];
        int i = l - 1;
        for (int j = l; j < h; j++) {
            if (nums[j] > pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[h]);
        return i + 1;
    }
};
