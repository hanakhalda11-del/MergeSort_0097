#include <iostream>
using namespace std;

// Create main array & temporary array
int arr[20], B[20]; 
// n is array input size
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "Maksimal panjang array adalah 20" << endl;
        }
    }

    cout << "-------------------------" << endl;
    cout << "\nInputkan isi element array: " << endl;
    cout << "-------------------------" << endl;

 for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << ": ";
        cin >> arr[i];
    }
}

// Create function mergeSort
void mergeSort(int low, int high)
{
    if (low >= high) // Step 1
    {
        return; // Step 1.a
    }

   int mid = (low + high) / 2; // Step 2
