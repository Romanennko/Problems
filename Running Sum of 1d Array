public class Solution
{
    public int[] RunningSum(int[] nums)
    {
            int[] copyNums = new int[nums.Length];
            Array.Copy(nums, copyNums, nums.Length);

            for (int i = 1; i < nums.Length; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    nums[i] += copyNums[j];
                }
            }


            return nums;
        }
}
