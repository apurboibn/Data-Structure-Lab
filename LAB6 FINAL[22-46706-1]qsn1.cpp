//QUEUE

#include <iostream>
using namespace std;

int queue[100], front = -1, rear = -1, maxSize=100;


bool isEmpty(){
    if ((front == -1) && (rear == -1))
    {
        return true;
    }

    else
    {
        return false;
    }
}

bool isFull()
{
    if (rear == maxSize-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool enqueue(int Element)
{
  if(isFull() )
    {
        cout<< "Queue is Full\n";
        return false;
    }
  else if(isEmpty() )
    {
        front = rear = 0;
        queue[rear] = Element;
        cout<< Element <<" is inserted successfully!\n";
        return true;
    }
    else
    {
        rear++;
        queue[rear] = Element;
        cout<< Element <<" is inserted successfully!\n";
        return true;
    }
}


bool dequeue()
{
    if(isEmpty() )
    {
        cout << "Queue is empty! DEQUEUE NOT POSSIBLE.\n";
        return false;
    }

    else if (front == rear)
    {
        front = rear = -1;
        cout << "Dequeue performed successfully!\n";
        return true;
    }

    else
    {
        front++;
        cout << "Dequeue performed successfully!\n";
        return true;
    }
}

int frontElement()
{
  return queue[front];
}

int rearElement()
{
  return queue[rear];
}


void showQueue()
{
  if (isEmpty() )
  {
      cout << "Cannot show Queue because it is empty\n";
      return;
  }

  else
  {
     cout << "\nQUEUE ELEMENTS: ";
     for(int i = front; i <= rear; i++)
     {
        cout << queue[i] << " ";
     }
     cout << endl << endl;
  }
}



int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    showQueue();
    cout<<"\nFront Element of the Queue: " << frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << rearElement() <<endl;

    dequeue();
    dequeue();

    showQueue();
    cout<<"\nFront Element of the Queue: " << frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << rearElement() <<endl;

    return 0;
}
