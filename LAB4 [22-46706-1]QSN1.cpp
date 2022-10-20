#include <iostream>
using namespace std;

void swap(int *ap, int *bp)
{
    int sample = *ap;
    *ap = *bp;
    *bp = sample;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
                {
                    swap(&arr[j], &arr[j+1]);
                }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int n;
    cout << "ENTER THE SIZE OF THE ARRAY : ";
    cin >> n;
    int arr[n];
    cout << " NOW ENTER THE ELEMENTS OF THAT ARRAY : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<" UNSORTED ARRAY : ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    bubbleSort(arr, n);
    cout<<" SORTED ARRAY : ";
    printArray(arr, n);

    return 0;
}
