#include <iostream>
using namespace std;

int main()
{
    int size, count = 0, num;

    cout<<"ENTER A NUMBER TO SEARCH : ";
    cin>>num;

    cout<<"ENTER THE SIZE OF FIRST ARRAY : ";
    cin>>size;

    int Array[size];
    cout<<"\n ENTER THE ELEMENT OF THE ARRAY : "<< num <<" IS: " ;
    for(int i=0; i<size; i++)
    {
        cin >> Array[i];
    }

    cout<<"\n\nTHE ARRAY WITH MULTIPLE " << num << " IS: " ;
    for(int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        if (Array[i] == num)
        {
            count++;
        }
    }

    cout << "\n\nTHIS NUMBER OCCURS "<< count <<" TIMES IN THE ARRAY."<< endl <<endl ;
    return 0;
}
