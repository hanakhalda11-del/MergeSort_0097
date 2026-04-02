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

 // Step 3
    // fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid);      // Step 3.a
    mergeSort(mid + 1, high); // Step 3.b

// Step 4
    int i = low;  // Step 4.a
    int j = mid + 1; // Step 4.b
    int k = low; // Step 4.c

 while (i <= mid && j <= high) // Step 4.d
    {
        if (arr[i] <= arr[j]) // Step 4.d.i
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++; // Step 4.d.ii
    }

    while (j <= high) // Step 4.e
    {
        B[k] = arr[j]; // Step 4.e.i
        j++;  // Step 4.e.ii
        k++; // Step 4.e.iii
    }

   while (i <= mid) // Step 4.f
    {
        B[k] = arr[i]; // Step 4.f.i
        i++;  // Step 4.f.ii
        k++; // Step 4.f.ii
    }

    // Step 5
    for (int x = low; x <= high; x++)
    {
        arr[x] = B[x];
    }
}

void output()
{
    cout << "\nData setelah diurutkan (Merge Sort): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    input();
    mergeSort(0, n - 1);
    output();
}
 

