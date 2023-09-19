def merge_the_tools(string, k):
    # your code goes here
    substr=[]
    ans=[]
    for i in range(0,len(string),k):
      substr.append(string[i:i+k])
      
    for i in substr:
      com=list(set(i))
      temp=""
      for j in i:
        if j in com:
          temp+=j
          com.remove(j)
      ans.append(temp)
    
    for i in ans:
      print(i)

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
