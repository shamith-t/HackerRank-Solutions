# Enter your code here. Read input from STDIN. Print output to STDOUT

N,M=map(int,input().split())
c=".|."


#top
for i in range(N//2):
  print((c*i).rjust((M//2)-1,'-')+c+(c*i).ljust((M//2)-1,'-'))
  
#middle
print("WELCOME".center(M,'-'))

#bottom
for i in range(N//2):
  print((c*((N//2)-i-1)).rjust((M//2)-1,'-')+c+((c*((N//2)-i-1)).ljust((M//2)-1,'-')))
