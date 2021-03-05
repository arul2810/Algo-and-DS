## Array Manipulation Hacker Rank by Arul Prakash S : GitHub = @arul2810 : arulprakash@spurtech.org

## Comments
## Need to improve time complexity

inputs = input().split()


# input [0] - > Length of Array
# input[1] -> Number of Manipulations to do

# Initialising Array

array = []
i = 0
while i < int(inputs[0]):
    array.append(0)
    i = i +1

# Getting Mainpulation Inputs

i = 0

while i < int(inputs[1]):
    manipulations= input().split()
    # Manipulation [0] and [1] describe the index : Manipulation [2] displays the value

    j = int(manipulations[0])-1

    add = int(manipulations[2])
    while j < int(manipulations[1]):
        array[j] = int(array[j]) + add
        j = j+1
        print(array)

    i = i+1

array.sort(reverse=True)
print(array[0])