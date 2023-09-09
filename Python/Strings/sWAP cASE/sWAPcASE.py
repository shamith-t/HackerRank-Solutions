def swap_case(s):
    ans=""
    for i in s:
      if i.islower()==True:
        ans=ans+i.upper()
      else:
        ans=ans+i.lower()
    return ans

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
