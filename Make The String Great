public class Solution
{
    public string MakeGood(string s)
    {
        List<char> listS = new List<char>();
        listS.AddRange(s);


        switch (listS.Count)
        {
            case 0:
                {
                    return "";
                }
            case 1:
                {
                    return s;
                }
            case 2:
                {
                    if (char.ToLower(listS[0]) == char.ToLower(listS[1]))
                    {
                        if (listS[0] != listS[1])
                            return "";
                        else
                            return s;

                    }
                    else
                    {
                        return s;
                    }
                }
            default:
                {
                    int countListS = listS.Count;
                    for (int j = 0; j < countListS; j++)
                    {
                        for (int i = 0; i < listS.Count - 1; i++)
                        {
                            if (char.ToLower(listS[i]) == char.ToLower(listS[i + 1]))
                            {
                                if (listS[i] != listS[i + 1])
                                {
                                    listS.RemoveAt(i);
                                    listS.RemoveAt(i);
                                }
                            }
                        }
                    }

                    string str = String.Join("", listS);
                    return str;
                }
        }
    }
}
