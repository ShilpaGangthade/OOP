#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr; // int *Arr;
        int iSize;

    public:
        Array(int X) // Parameterised Contructor
        {
            iSize= X;
            Arr = new int[iSize];
        }
        ~Array() // Destructor
        {
            delete []Arr;
        }
        void Accept() // Member Function
        {
            int iCnt=0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt =0; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
            {
                cout<<"Elements of the array are : "<<endl;
                int iCnt = 0;
                for(iCnt=0; iCnt<iSize; iCnt++)
                {
                    cout<<Arr[iCnt]<<"\t";
                }
                cout<<endl;

            }
        
}; //End of Class
int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    delete aobj;

    return 0;
}