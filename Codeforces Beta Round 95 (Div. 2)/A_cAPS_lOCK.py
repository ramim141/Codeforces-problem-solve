s=input()

ok=True
for i in range(1,len(s)):
    if s[i].upper()!=s[i]:
        ok=False
        break
if ok and s[0].upper()==s[0]:
    print(s.lower())
elif ok:
    print(s[0].upper()+s[1:].lower())
else:
    print(s)



