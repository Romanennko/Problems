member1 = 1
member2 = 2
member3 = 0
result = 2
while member3 < 4_000_000:
    member3 = member1 + member2
    member1 = member2
    member2 = member3
    if member3 % 2 == 0:
        result += member3

print(result)
