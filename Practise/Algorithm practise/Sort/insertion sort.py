a = [];
#taking input
print("How many item do you want to enter");
length = input();
print("length: "+ str(length));
for i in range (0, length):
    a.append(input())

#check
print("Before Sorted:");
print(a);

#insertion sort
for i in range(1, length):
    key = a[i]
    for j in range(i - 1, -1, -1):
        if a[j] > key:
            a[j + 1] =  a[j]
            a[j] = key
        else: 
            break
            
#output
print("After Sorted:");
print(a);





