public class Solution
{
    public int PivotIndex(int[] nums)
    {
            int index = -1;

            for (int i = 0; i < nums.Length; i++)
            {
                int sumLeftEdge = 0, sumRightEdge = 0;
                
                if (i == 0)
                {
                    sumLeftEdge = 0;
                }
                else
                {
                    for (int j = 0; j < i; j++)
                    {
                        sumLeftEdge += nums[j];
                    }
                }

                if (i == nums.Length)
                {
                    sumRightEdge = 0;
                }
                else
                {
                    for (int j = i + 1; j < nums.Length; j++)
                    {
                        sumRightEdge += nums[j];
                    }
                }

                if (sumLeftEdge == sumRightEdge)
                {
                    index = i;
                    i = nums.Length + 1;
                }

            }

            return index;
        }
}
