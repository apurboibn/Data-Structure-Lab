#include <iostream>
using namespace std;

int find (int arr[], int n, int a)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == a)
            {
                return i;
            }
    }
    return -1;
}

int main(void)
{
    int n, element, i;
    cout << "ENTER THE SIZE OF THE ARRAY : ";
    cin >> n;
    int arr[n];
    cout<< " NOW ENTER THE ELEMENTS OF THAT ARRAY : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n ENTER THE NUMBER THAT YOU WANT TO SEARCH : ";
    cin >> element;
    int result = find (arr, n, element);

    if(result == -1)
    {
       cout<<"\n\nNUMBER IS NOT IN THE ARRAY !";
    }
    else
    {
       cout<<"\n\nELEMENT FOUND IN INDEX : " <<result;
    }
    cout<<endl;
    return 0;
}
