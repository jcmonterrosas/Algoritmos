#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

unsigned long long _mergeSort(unsigned long long arr[], unsigned long long temp[], unsigned long long left, unsigned long long right);
unsigned long long merge(unsigned long long arr[], unsigned long long temp[], unsigned long long left, unsigned long long mid, unsigned long long right);

unsigned long long mergeSort(unsigned long long arr[], int array_size)
{
    unsigned long long* temp = (unsigned long long*)malloc(sizeof(unsigned long long) * array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}

unsigned long long _mergeSort(unsigned long long  arr[], unsigned long long temp[], unsigned long long left, unsigned long long right)
{
    unsigned long long mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;

        inv_count = _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

unsigned long long merge(unsigned long long arr[], unsigned long long temp[], unsigned long long left, unsigned long long mid, unsigned long long right)
{
    unsigned long long i, j, k;
    unsigned long long inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];

            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

int main(int argv, char** args)
{
    unsigned long long n = 100000;
    unsigned long long *v;
    unsigned long long i;

    v = (unsigned long long *) malloc(n * sizeof(unsigned long long));
    FILE *p;
    fstream in;
    in.open("input.txt", ios::in);
    for(i = 0;i < n;i++){
            in>>v[i];
    }
    cout << mergeSort(v, n);
    return 0;
}
