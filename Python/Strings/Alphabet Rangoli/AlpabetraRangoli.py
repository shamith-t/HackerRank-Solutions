def print_rangoli(size):
    # your code goes here
    
    #top
    alp=""
    for i in range(size-1):
      print(alp.rjust(size+(size-2),'-')+chr(ord('a')+size-1-i)+(alp[::-1].ljust(size+(size-2),'-')))
      alp=alp+chr(ord('a')+size-1-i)+'-'
    
    #mid
    print(alp+'a'+alp[::-1])
    
    #bottom
    for i in range(size-1):
      alp=alp[:-2]
      print(alp.rjust(size+(size-2),'-')+chr(ord('a')+1+i)+(alp[::-1].ljust(size+(size-2),'-')))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
