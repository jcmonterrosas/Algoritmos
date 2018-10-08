import time

start_time = time.time()
n = 1000000
archivo = open("input.txt", "r")
a = archivo.read().split()
archivo.close() 
r = 0

for k in range(n-1):
    for i in range(n-k-1):
            if int(a[i]) > int(a[i+1]):
                print r
                r += 1
                temp = a[i]
                a[i] = a[i+1]
                a[i+1] = temp
print r
print("--- %s seconds ---" % (time.time() - start_time))

