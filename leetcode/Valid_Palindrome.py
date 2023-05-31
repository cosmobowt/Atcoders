import re
s = input()
st = "".join(re.split("[^a-zA-Z0-9]*", s)).lower()
pals = st[::-1]
if st == pals:
    print("true")
else:
    print("false")