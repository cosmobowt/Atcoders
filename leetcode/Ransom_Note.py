magazine = str(input())
ransomNote = str(input())

d = {}
magazine = list(magazine)
ransom = list(ransomNote)

for i in magazine:
    if i in d:
        d["i"] += 1
    else:
        d["i"] = 1

for i in ransomNote:
    if not i in d:
        return False
    elif d["i"] == -1:
        return False
    else:
        d["i"] -= 1

return