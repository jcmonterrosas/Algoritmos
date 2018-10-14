import time

start_time = time.time()
n = 100000
archivo = open("input.txt", "r")
a = [int(i) for i in archivo.read().split()]
#a = archivo.read().split()
count = 0

for i in range(1,n):
    temp = a[i]
    j = i
    #while int(j) >= 0 and int(temp) < int(a[j - 1]):
    while j > 0 and temp < a[j-1]:
        a[j] = a[j - 1]
        j -= 1
        #print (temp, a[j])
        count += 1
    a[j] = temp
    
print (count)
print("--- %s seconds ---" % (time.time() - start_time))

#Codigo adaptado de la implementacion presentada en Hackerearth - Insertion Sort
