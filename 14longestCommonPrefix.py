def longestCommonPrefix(self, strs):
  maxy = len(strs[0])
  result = []
  for i in strs:
    if maxy > len(i):
      maxy = len(i)

  for i in range(maxy):
    char = strs[0][i]
    count = 0
    for j in strs:
      if char == j[i]:
        count += 1
      if count == len(strs):
        result.append(char)
        count = 0
  result = "".join(result)
  return result
