# Arul Prakash Samathuvamani : github : @arul2810

# No Optimisation Done -  Check for Optimisation

no_of_str = int(input())
i = 0
str1 = []
query = []
while i < no_of_str:
    temp = str(input())
    str1.append(temp)
    i = i+1
i = 0
no_of_query = int(input())
while i < no_of_query:
    temp = str(input())
    query.append(temp)
    i = i+1
i = 0
j = 0
ans = []
#search algo is linear search. Can change?

while i < no_of_query:
    temp = 0

    while j < no_of_str:

        if query[i] == str1[j]:

            temp = temp +1
            j = j+1
        else:
            j = j+1
    ans.append(temp)
    i = i+1
    j=0

i = 0

while i < no_of_query:
    print(ans[i])
    i = i+1

