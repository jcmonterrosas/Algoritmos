#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

//void lectura();

int main()
{
    long n;
    cin >> n;
    vector <unsigned long long> arr(n);
    //long i;
    /*for(i = 0;i < n;i++)
    {
    cin >> arr[i];
    }*/
    FILE *p;
    fstream in;
    //ifstream archivo;
    //string texto;
    long long i = 0;
    in.open("input.txt", ios::in);
    in >> arr[i];
    //archivo.open("input.txt",ios::in);
    while(!in.eof()){
            i++;
            in>>arr[i];
            //cout << arr[i];
    }
    //fclose(p);
    //for(i =0;i<n;i++){
      //  cout << arr[i]<<endl;
    //}

    long long j,k,count=0;

    for(j = 0;j < n-1;j++)
    {
        for(i=0;i < n-j-1;i++)
        {
            if(arr[i] > arr[i+1])
            {
                //cout<<arr[i]<<endl;
                //cout<<arr[i+1]<<endl;
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
    //lectura();

    return 0;
}
/*
void lectura(long long arr[]){
    ifstream archivo;
    string texto;
    long count = 0;

    archivo.open("input.txt",ios::in);
    while(!archivo.eof()){
            getline(archivo,texto);
            arr[count] = texto;
    }
    archivo.close();
}*/
