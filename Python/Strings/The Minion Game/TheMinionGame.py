def minion_game(string):
    # your code goes here
    vowles=['A','E','I','O','U']
    stu_score=0
    kev_score=0
    
    for i in range(len(string)):
      if string[i] in vowles:
        kev_score+=len(string)-i
      else:
        stu_score+=len(string)-i
        
    if stu_score==kev_score:
      print("Draw")
    elif stu_score>kev_score:
      print("Stuart",stu_score)
    else:
      print("Kevin",kev_score)
  
if __name__ == '__main__':
    s = input()
    minion_game(s)
