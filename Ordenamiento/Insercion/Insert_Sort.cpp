
#include <iostream>

using namespace std;

int main() {
    int arr[5] = { 15,53,84,62,10 };
    int pos, aux;

    for (int i = 0; i < 5; i++)
    {
        pos = i;
        aux = arr[i];

        while (pos > 0 && aux < arr[pos - 1])
        {
            arr[pos] = arr[pos - 1];
            pos--;
        }
        arr[pos] = aux;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
