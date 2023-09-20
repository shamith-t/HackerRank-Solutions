# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations

S,k=map(str,input().split())
S=''.join(sorted(S))
k=int(k)

for i in range(1,k+1):
  combi=list(combinations(S,i))
  for j in combi:
    print(''.join(j))
