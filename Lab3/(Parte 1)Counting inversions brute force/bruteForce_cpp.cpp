#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    long n;
    cin >> n;
    vector <unsigned long long> arr(n);
    FILE *p;
    fstream in;
    long long i = 0;
    in.open("input.txt", ios::in);
    in >> arr[i];
    while(!in.eof()){
            i++;
            in>>arr[i];
    }

    long long j,k,count=0;

    for(j = 0;j < n-1;j++)
    {
        for(i=0;i < n-j-1;i++)
        {
            if(arr[i] > arr[i+1])
            {
                long long temp;
                cout<<count<<endl;
                count++;
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }
    }
    cout << count;

    return 0;
}
