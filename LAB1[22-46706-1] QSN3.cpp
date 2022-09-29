#include <iostream>
#include <conio.h>
using namespace std;

void even(int array[],int size){

    for(int i=0;i<size;i++){
        if(array[i]%2==0){
            cout<<array[i]<<" ";
        }
    }
}

void odd(int array[],int size){
    for(int i=0;i<size;i++){
        if(array[i]%2!=0){
            cout<<array[i]<<" ";
        }
    }

}

int main() {
    int n;
    cout<<"Enter how many number you want to input= ";
    cin>>n;

    cout<<"Please enter the numbers= ";



   int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"Your Numbers are: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<endl;

    cout<<"Even Numbers are: ";

    even(arr,n);

    cout<<endl;

    cout<<"Odd Numbers are: ";

    odd(arr,n);


    getch();
}
