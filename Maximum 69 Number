public class Solution
{
    public int Maximum69Number(int num)
    {
        string number = Convert.ToString(num);

        List<char> digits = new List<char>();
        digits.AddRange(number);

        List<string> results = new List<string>();

        int count = 0;
        for (int i = 0; i < digits.Count; i++)
        {
            for (int j = 0; j < digits.Count; j++)
            {
                if (count == 0)
                {
                    if (digits[i] == '6')
                    {
                        digits[i] = '9';
                        results.Add(string.Join("", digits));
                        count++;
                    }
                    else
                    {
                        digits[i] = '6';
                        results.Add(string.Join("", digits));
                        count++;
                    }
                }
                else
                {
                    if (digits[i] == '6')
                    {
                        digits[i] = '9';
                        break;
                    }
                    else
                    {
                        digits[i] = '6';
                        break;
                    }
                }
            }
            count--;
        }

        int maxNum = num;

        foreach (var item in results)
        {
            if (int.Parse(item) > maxNum)
            {
                maxNum = int.Parse(item);
            }
        }
        return maxNum;
    }
}
