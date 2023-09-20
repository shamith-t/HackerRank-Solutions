# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations_with_replacement as cr

S,k=map(str,input().split())
S=''.join(sorted(S))
combi=list(cr(S,int(k)))
for i in combi:
  print(''.join(i))
