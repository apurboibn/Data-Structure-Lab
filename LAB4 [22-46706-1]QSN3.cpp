#include <iostream>
using namespace std;

void swap(int *ap, int *bp)
{
    int sample = *ap;
    *ap = *bp;
    *bp = sample ;
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
                    swap(&arr[j], &arr[j+1]) ;
                }
        }
    }
}

int BinarySearch(int arr[], int first, int last, int element)
{
	while (first <= last)
    {

		int middle = (first + last)/2;

		if (arr[middle] == element)
        {
            return middle;
        }

		else if (arr[middle] < element)
        {
            first = middle + 1;
        }

		else
        {
            last = middle - 1;
        }
	}

	return -1;
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

int main(void)
{
    int n, element, i;

    cout << "ENTER THE SIZE OF AN ARRAY: ";
    cin >> n;

    int arr[n];
    cout<< " ENTER THE ELEMENTS OF THAT ARRAY : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"\nUNSORTED ARRAY : ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout<<"\nSORTED ARRAY : ";
    printArray(arr, n);

    cout << "\nENTER THE ELEMENT THAT YOU WANT TO SEARCH : ";
    cin >> element;

    int result = BinarySearch(arr, 0, n, element);

	if(result == -1)
    {
        cout << "\nELEMENT IS NOT IN THE ARRAY!" << endl;
    }
    else
    {
        cout << "\nELEMENT FOUND IN INDEX : " << result << endl;
    }

	return 0;
}
