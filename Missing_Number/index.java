class Solution {
    public int missingNumber(int[] nums) {
        int sumArr = 0;
        for (int i = 0; i <= nums.length; i++) {
            if (i != nums.length)
                sumArr ^= nums[i];
            sumArr ^= i;
        }
        return sumArr;
    }
}
