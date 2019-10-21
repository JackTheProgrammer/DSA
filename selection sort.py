L = [42424, 77575, 5646, 85454]
for i in range(0, 4):
    for j in range(i+1, 4):
        if L[i] > L[j]:
            L[i],L[j] = L[j],L[i]

print("sorted array after selection sort is\n")
for elements in L:
    print(elements)
