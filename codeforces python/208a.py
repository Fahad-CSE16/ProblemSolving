n=str(input())
n=n.upper()
n = n.replace("WUB", " ")
import re
keywords = re.split(' ', n)
for i in keywords:
    if i is None or i == '':
        keywords.remove(i)
print(" ".join(keywords))
