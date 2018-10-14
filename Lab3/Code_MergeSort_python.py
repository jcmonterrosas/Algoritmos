import time

def merge(A, p, q, r):
    if(A[q] <= A[q+1]):
        return 0

    L = A[p:q+1]
    R = A[q+1:r+1]
    i = 0
    j = 0
    k = p
    count = 0
    
    while i < len(L) and j < len(R):
        if L[i] <= R[j]:
            A[k] = L[i]
            i += 1
        else:
            A[k] = R[j]
            j += 1
            count += len(L)-i
        k += 1
    A[k: k + len(L) - i] = L[i:]
    return count
            
def merge_sort_main(A, p, r):
    x = 0
    if p < r:
        q = int((p + r) / 2.0)
        x = merge_sort_main(A, p, q)
        x += merge_sort_main(A, q + 1, r)
        x += merge(A, p, q, r)
    return x


def merge_sort(A,n):
    x = merge_sort_main(A, 0, n - 1)
    return x

start_time = time.time()
n = 100000
archivo = open("input.txt", "r")
a = [int(i) for i in archivo.read().split()]
archivo.close() 
print (merge_sort(a,n))
print("--- %s seconds ---" % (time.time() - start_time))

#Codigo adaptado de la implementacion presentada en
#IPython notebook: corrección y análisis de algoritmos - fagonzalezo/merge_sort.ipynb
