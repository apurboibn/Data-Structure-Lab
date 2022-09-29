#include <iostream>
using namespace std;

int main()
{
    int size, flag=0;
    cout<<"ENTER THE SIZE OF FIRST ARRAY : ";
    cin>>size;

    int Array[size];
    cout<<"\nENTER THE ELEMENT OF THE ARRAY : ";
    for(int i=0; i<size; i++)
    {
        cin >> Array[i];
    }

    cout << "THE UNIQUE ARRAY IS : ";
    for (int i = 0; i < size; i++)
    {
        int j;

        for(j = 0; j < i; j++)
        {
            if (Array[i] == Array[j])
            {
                flag = 1;

                break;
            }
        }


        if (i == j)
        {
            cout << Array[i] << " ";
        }
    }

    if(flag == 0)
    {
        cout<<" ARRAY IS ALREADY UNIQUE !";
    }
    cout << endl << endl;
    return 0;
}


