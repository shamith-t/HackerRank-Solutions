def merge_the_tools(string, k):
    # your code goes here
    substr=[]
    ans=[]
    for i in range(0,len(string),k):
      substr.append(string[i:i+k])
      
    for i in substr:
      temp=''
      for j in i:
        if j not in temp:
          temp+=j
      print(temp)
    
    

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
