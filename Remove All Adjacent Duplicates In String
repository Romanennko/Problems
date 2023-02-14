public class Solution
{
    public string RemoveDuplicates(string s)
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
                default:
                    {
                        for (int i = 0; i < listS.Count - 1; i++)
                        {
                            if (listS[i] == listS[i + 1])
                            {
                                listS.RemoveAt(i);
                                listS.RemoveAt(i);
                                switch (i)
                                {
                                    case 0:
                                        i--;
                                        break;
                                    default:
                                        i -= 2;
                                        break;
                                }

                            }
                        }


                        return String.Join("", listS);
                    }
            }
    }
}
