#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    long n = 100000;
    vector <unsigned long long> arr(n);
    FILE *p;
    fstream in;
    long long i;
    in.open("input.txt", ios::in);
    for(i = 0;i < n;i++){
            in>>arr[i];
    }

    long long j,temp,count=0;

    for(i = 1;i < n;i++)
    {
        temp = arr[i];
        j = i;
        while(j > 0 && temp < arr[j-1])
        {
            count++;
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = temp;
    }

    cout << count;

    return 0;
}

//Codigo adaptado de la implementacion presentada en Hackerearth - Insertion Sort
