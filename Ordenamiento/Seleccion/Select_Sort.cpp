#include<iostream>
#include<conio.h>

using namespace std;

int main() {

    int a[5] = { 5,3,2,1,4 };

    int min, aux;

    for (int i = 0; i < 5; i++)
    {
        min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}