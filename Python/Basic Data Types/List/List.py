if __name__ == '__main__':
    List=[]
    N = int(input())
    for i in range(N):
      arg=input().split()
      if arg[0]=="insert":
        i=int(arg[1])
        e=int(arg[2])
        List.insert(i,e)
      elif arg[0]=="print":
        print(List)
      elif arg[0]=="remove":
        e=int(arg[1])
        List.remove(e)
      elif arg[0]=="append":
        e=int(arg[1])
        List.append(e)
      elif arg[0]=="sort":
        List.sort()
      elif arg[0]=="pop":
        List.pop(-1)
      elif arg[0]=="reverse":
        List.reverse()
