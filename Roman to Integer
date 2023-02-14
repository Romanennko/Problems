public class Solution 
{
    private static Dictionary<char, int> map = new Dictionary<char, int>()
        {
            { 'I', 1 },
            { 'V', 5 },
            { 'X', 10 },
            { 'L', 50 },
            { 'C', 100 },
            { 'D', 500 },
            { 'M', 1000 },
        };
    
    public int RomanToInt(string s) 
    {
        int result = 0;
            for (int i = 0; i < s.Length; i++)
            {
                if (i + 1 < s.Length && IsSubtractive(s[i], s[i + 1]))
                {
                    result -= map[s[i]];
                }
                else
                {
                    result +=map[s[i]];
                }
            }
            return result; 
    }
    
    private static bool IsSubtractive(char v1, char v2)
        {
            return map[v1] < map[v2];
        }
}
