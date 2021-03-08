


test_cases = int(input())
i = 0
print()
while( i < test_cases):



    input_number = input()
    length = len(input_number)
    j = 0
    brackets = 0
    print("Case #",end="")
    print(i+1,end="")
    print(":",end=" ")

    while(j<length):
        if(j == 0):
            previous = int(input_number[0])
            temp = int(input_number[0])
            k = 0
            while(k < int(temp)):
                print("(",end="")
                k = k + 1
                brackets = brackets + 1
            print(input_number[0], end = "")
        else:
            temp = int(input_number[j])
            temp = int(previous) - temp
            previous = int(input_number[j])
            k = 0
            while(k<int(temp)):
                print(")",end="")
                k = k + 1
                brackets = brackets - 1
            if(temp < 0):
                k = 0;
                temp = abs(temp)
                while(k<int(temp)):
                    print("(",end="")
                    k = k + 1
                    brackets = brackets + 1
            print(input_number[j], end="")

        j = j + 1
    while(brackets != 0):
        print(")", end= " ")
        brackets = brackets -1
    print()
    i = i + 1

