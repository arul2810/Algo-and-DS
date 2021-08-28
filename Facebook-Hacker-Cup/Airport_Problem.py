test_cases=int(input("Enter Number of Test Cases:"))

def split(word):
    return [char for char in word]

for i in range (0,test_cases,1):

    N = int(input())
    if N%2 == 0:
        print("Input is incorrect")

    in_string_temp = str(input())
    in_string = split(in_string_temp)
    a_value = 0
    b_value = 0
    k=0
    while k <= N:
        if in_string[k] == "A":
            a_value=a_value+1
            print("Value of A is incremented and its value is",a_value)
            k=k+1
        elif in_string[k]=="B":
            b_value=b_value+1
            print("Value of B is incremented and its value is",b_value)
            k=k+1
        else:
            print("Input is incorrect")
            k=k+1

    if a_value-b_value == 1:
        print("Case #",i+1)
        print("Y")
    elif b_value-a_value ==1:
        print("Case #",i+1)
        print("Y")
    else:
        print("Case #",i+1)
        print("N")