// accept n numbers from user and perform operation
#include<iostream>
using namespace std;

int Addition(int Arr[], int Length)
{
    int Sum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}
int main()
{
    int Size = 0,iCnt=0;
    int *ptr = NULL;

    // Step 1 :
    cout<<"Enter number of elements : "<<"\n";
    cin>>Size;

    // Step 2 :
    ptr = new int[Size];

    // Step 3 :
    cout<<"Enter the elements : "<<"\n";
    for(iCnt=0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    // Step 4 :
    int Ret=Addition(ptr,Size);

    cout<<"Addition of all elements is : "<<Ret<<"\n";
    
    cout<<"Elements of the array are : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    // Step 5 :
    delete []ptr;
    return 0;
}