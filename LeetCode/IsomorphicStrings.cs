public class Solution
{
    public bool IsIsomorphic(string s, string t)
    {
            var listS = new List<char>();
            listS.AddRange(s);
            var listT = new List<char>();
            listT.AddRange(t);

            var digits = new Dictionary<char, char>();

            for (int i = 0; i < listT.Count; i++)
            {
                foreach (var item in digits)
                {
                    if (item.Value == listT[i])
                    {
                        if (item.Key != listS[i])
                        {
                            return false;
                        }
                    }
                }
                
                char value;
                if (digits.TryGetValue(listS[i], out value))
                {
                    if (value != listT[i])
                    {
                        return false;
                    }
                    else
                    {
                        continue;
                    }
                }
                digits.Add(listS[i], listT[i]);
            }

            return true;
        }
}
