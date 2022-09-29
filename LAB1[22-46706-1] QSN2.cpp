#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter how many number you want to input= ";
    cin>>n;

    cout<<"Please enter the numbers= ";

   int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your Numbers are: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Even Numbers are: ";

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }

    cout<<endl;

    cout<<"Odd Numbers are: ";

    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }



    return 0;
}
