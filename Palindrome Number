public class Solution
{
    public bool IsPalindrome(int x)
    {
        string num = Convert.ToString(x);
        List<char> digits = new List<char>();
        digits.AddRange(num);
        List<char> reDigitsList = new List<char>();

        for (int i = digits.Count -1; i > -1; i--)
        {
            reDigitsList.Add(digits[i]);
        }

        string reDigits = String.Join("", reDigitsList);
        string xStr = Convert.ToString(x);

        if (reDigits == xStr)
        {
            return true;
        }

        else
        {
            return false;

        }
    }
}
