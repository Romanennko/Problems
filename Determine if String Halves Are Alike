public class Solution
{
    public bool HalvesAreAlike(string s)
    {
        if (s.Length % 2 != 0)
        return false;

        int halfLength = s.Length / 2;
        string a = s.Substring(0, halfLength);
        string b = s.Substring(halfLength);
        int countA = 0;
        int countB = 0;

        foreach (char c in a)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            countA++;
        }

        foreach (char c in b)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            countB++;
        }

        return countA == countB;
    }
}
