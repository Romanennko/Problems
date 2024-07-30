def addTwoNumbers(l1, l2):
  l1.reverse()
  l2.reverse()
  for i in l1:
    l1.insert(l1.index(i), str(i))
    l1.pop(l1.index(i))

  for i in l2:
    l2.insert(l2.index(i), str(i))
    l2.pop(l2.index(i))

  sums = int("".join(l1)) + int("".join(l2))

  result = []
  for i in str(sums):
    result.insert(0, int(i))

  return result
