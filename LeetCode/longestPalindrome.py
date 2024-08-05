def longestPalindrome(s: str) -> str:
  resultList = []
  resultList.append(s[0])
  
  for startIndex, i in enumerate(s):
    for endIndex, j in enumerate(s):
      if i == j and startIndex != endIndex:
        a = s[startIndex: endIndex + 1]
        
        if a == a[::-1]:
          resultList.append(a)
          
  return max(resultList, key=len)
