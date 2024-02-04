// Insertion Sort ntbc
#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        
        void SelectionSort()
        {
            int min_index = 0;
            int i = 0, j = 0;
            int iTemp = 0;

            for(i=0;i<iSize;i++)
            {
                  min_index = 1;
                for(j=0;j<iSize-1;j++)
                {
                  
                    if(Arr[j]<Arr[min_index])
                    {
                       min_index = j;
                    }
                }
                 iTemp = Arr[i];
                 Arr[j]=Arr[min_index];
                 Arr[min_index]=iTemp;
            }
        }

};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    aobj->SelectionSort();

    aobj->Display();

    delete aobj;

    return 0;
}