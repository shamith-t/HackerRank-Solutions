if __name__ == '__main__':
    students=[]
    for i in range(int(input())):
        name = input()
        score = float(input())
        students.append([name,score])
    students.sort(key=lambda x:x[1])
    students_copy=students[:]
    low_score=students[0][1]
    for i in students_copy:
      if i[1]==low_score:
        students.remove(i)
    second_low=students[0][1]
    low_students=[]
    for i in students:
      if i[1]==second_low:
        low_students.append(i)
    low_students.sort()
    for i in low_students:
      print(i[0])        
