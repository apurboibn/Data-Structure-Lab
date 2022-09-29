#include <iostream>
using namespace std;

int main()
{
    int size1, size2, n=0;
    cout<<"ENTER THE SIZE OF THE FIRST ARRAY: ";
    cin>>size1;

    cout<<"\nENTER THE SIZE OF THE SECOND ARRAY: ";
    cin>>size2;

    int Array1[size1], Array2[size2], Array3[max(size1,size2)];

    cout<<"\nENTER THE ELEMENT OF FIRST ARRAY: ";
    for(int i=0; i<size1; i++)
    {
        cin >> Array1[i];
    }

    cout<<"\nENTER THE ELEMENT OF SECOND ARRAY : ";
    for(int j=0; j<size2; j++)
    {
        cin >> Array2[j];
    }

    for(int i = 0 ; i < size1; i++)
    {
        for (int j = 0 ; j < size2; j++)
        {
            if(Array1[i] == Array2[j])
            {
                Array3[n] = Array2[j];
                n++;
            }
        }
    }

    if(n == 0)
    {
        cout<<"\n\n NO COMMON ELEMT FOUND ! "<<endl<<endl;
    }
    else
    {
        cout<<"\n\nCOMMON ELEMENT OF BOTH ARRAY : "<<endl;
        for (int i = 0; i<n; i++)
        {
                cout << Array3[i] << " ";
        }
        cout<<endl<<endl;
    }
    return 0;
}

