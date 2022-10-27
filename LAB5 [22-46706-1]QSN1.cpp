#include <iostream>
using namespace std;

int Stack[10], Top=0, MaxSize=10;

bool isEmpty()
{
	return (Top == 0);
}

bool isFull()
{
	return (Top == MaxSize);
}

bool push(int Element)
{
	if( isFull() )
    {
        cout << "STACK IS FULL !\n";
        return false;
    }
 	Stack[ Top++ ] = Element;
 	cout<< Element <<" HAS BEEN INSERTED SUCCESSFULLY !\n";
	return true;
}

bool pop()
{
	if( isEmpty() )
    {
        cout << "SATCK IS EMPTY !\n";
        return false;
    }
	Top--;
	cout << "POP PERFORMED !\n";
	return true;
}

int topElement()
{
	return Stack[ Top - 1 ];
}

void show()
{
	if(isEmpty())
    {
        cout << "STACK IS EMPTY !\n";
        return;
    }
    cout << "\n**** STACK ELEMENTS ****\n";
	for( int i=Top-1; i>=0; i-- )
	{
        cout << Stack[i] << endl;
	}
	cout<<endl<<endl;
}

int main()
{

    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    show();
    cout<<"\nTOP ELEMENT OF THE STACK: " << topElement() << endl;

    pop();
    pop();
    cout<<"\nTOP ELEMENT OF THE STACK: " << topElement() << endl;
    show();

    pop();
    cout<<"\nTOP ELEMENT OF THE STACK: " << topElement() << endl;
    show();

    return 0;
}
