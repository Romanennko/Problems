def longestCommonPrefix(self, strs):
  maxy = len(strs[0])
  result = []
  for i in strs:
    if maxy > len(i):
      maxy = len(i)
   
  characterCounter = 0

  for i in range(maxy):
    char = strs[0][i]
    characterCounter += 1
    matchCounter = 0
    
    for j in strs:
      if char == j[i]:
        matchCounter += 1
      
      if matchCounter == len(strs):
        result.append(char)
        matchCounter = 0
     
    if characterCounter != len(result):
      break

  result = "".join(result)
  return result
