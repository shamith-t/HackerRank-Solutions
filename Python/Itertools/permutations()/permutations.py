# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations

S,k=map(str,input().split())
S=''.join(sorted(S))
permu=list(permutations(S,int(k)))

for i in permu:
  print(''.join(i))
