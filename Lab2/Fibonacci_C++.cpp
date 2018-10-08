#include <iostream>

using namespace std;

int main()
{
    cout << "Seleccione tipo de dato: " << endl;
    cout << " 1 Short " <<endl;
    cout << " 2 Int " <<endl;
    cout << " 3 Long" <<endl;
    cout << " 4 Long Long" <<endl;
    switch(cin.get()){
    case '1':
        {
        cout << "Ingrese Short" <<endl;
        short n = 0;
        cin >> n;
        short x = 0;
        short y = 1;
        short sum = 0;
        for(short i = 0; i < n; i++){
            if (y > SHRT_MAX - x) {
                cout << "Overflow en la iteracion: " <<(i+1) <<endl;
                break;
            }
            x = y;
            y = sum;
            sum = (short) (x + y);
            cout << y << " ";
            }
        }
        break;
    case '2':
        {
        cout << "Ingrese Int" <<endl;
        int n = 0;
        cin >> n;
        int x = 0;
        int y = 1;
        int sum = 0;
        for(int i = 0; i < n; i++){
            if (y > INT_MAX - x) {
                cout << "Overflow en la iteracion: " <<(i+1) <<endl;
                break;
            }
            x = y;
            y = sum;
            sum = (int) (x + y);
            cout << y << " ";
            }
        }
        break;
    case '3':
        {
        cout << "Ingrese Long" <<endl;
        long n = 0;
        cin >> n;
        long x = 0;
        long y = 1;
        long sum = 0;
        for(long i = 0; i < n; i++){
            if (y > LONG_MAX - x) {
                cout << "Overflow en la iteracion: " <<(i+1) <<endl;
                break;
            }
            x = y;
            y = sum;
            sum = (long) (x + y);
            cout << y << " ";
            }
        }
        break;
    case '4':
        {
        cout << "Ingrese Long Long" <<endl;
        long long n = 0;
        cin >> n;
        long long x = 0;
        long long y = 1;
        long long sum = 0;
        for(long long i = 0; i < n; i++){
            if (y > LONG_LONG_MAX - x) {
                cout << "Overflow en la iteracion: " <<(i+1) <<endl;
                break;
            }
            x = y;
            y = sum;
            sum = (long long) (x + y);
            cout << y << " ";
            }
        }
        break;
    default:
        cout << "Error" <<endl;
        break;
    }
    return 0;
}
