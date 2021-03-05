def print_string(s):

    str1 = " "

    for ele in s:

        str1 = ele+str1

    return str1

no = int(input())
array = input().split()
array = array.reverse()
print(print_string(array))
