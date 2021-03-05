test_cases = int(input())

i = 0

while i < test_cases:
    length = int(input())
    j = 0
    array = [0]

    while j < length:
        temp = int(input())
        if(array[temp]):
            print("Second")
            break
        elif(j == length -1):
            print("First")
        else:
            array[temp] = 1
        j = j +1
    i = i +1
