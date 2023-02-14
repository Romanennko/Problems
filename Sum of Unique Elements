public class Solution
{
    public int SumOfUnique(int[] nums)
    {
        var nya = new Dictionary<int, int>();
        for (int i = 0; i < nums.Length; i++)
        {
            if (nya.ContainsKey(nums[i]))
            {
                nya[nums[i]]++;
            }
            else
            {
                nya.Add(nums[i], 1);
            }
        }
        int result = 0;
        foreach (KeyValuePair<int, int> o in nya)
        {
            if (o.Value == 1)
            {
                result += o.Key;
            }
        }
        return result;
    }
}
