#include <iostream>
using namespace std;

struct employee
{
    int employeeID;
    int joiningyear;
    double salary;
};

int main()
{
   struct employee E[10];
   int i, n = 0;
   bool isUsed[10] = {0};

   for(i=0; i<10; i++)
   {
       cout << "*** Please enter the information of " <<(i + 1)<< "th number student *** "<< endl;
       cout<<"Employee ID: ";
       cin>>n;

       if((n >= 0) && (n <= 9))
       {
           if (isUsed[n] == false)
            {
                E[i].employeeID = n;
                isUsed[n] = true;
                cout<<"joining Year of the Employee: ";
                cin>>E[i].joiningyear;
               cout<<"Salary : ";
               cin>>E[i].salary;
            }

            else
            {
                cout << "Employee ID has been used. Try another ID !" << endl;
                i--;
            }
        }

        else
        {
            cout << "Employee ID from 0-9 only !" << endl;
            i--;
        }


       cout<<endl;
   }

   cout<<"\nEmployee ID who has salary more than 20,000 : ";
   for(i=0;i<10;i++)
   {
       if(E[i].salary>20000)
       {
            cout<<E[i].employeeID<<endl;
       }
   }

   cout<<"\nEmployee ID who have joined before 2009 : ";
   for(i=0;i<10;i++)
   {
       if(E[i].joiningyear < 2009)
       {
            cout<<E[i].employeeID<<endl;
       }
   }

   cout<<endl<<endl;
   return 0;
}
