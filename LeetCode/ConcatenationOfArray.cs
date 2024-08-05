public class Solution
{
    public int[] GetConcatenation(int[] nums)
    {
            int[] doubleNums = new int[nums.Length * 2];

            for (int i = 0; i < nums.Length; i++)
            {
                doubleNums[i] = nums[i];
            }

            for (int i = nums.Length; i < doubleNums.Length; i++)
            {
                doubleNums[i] = nums[i - nums.Length];
            }

            return doubleNums;
        }
}
