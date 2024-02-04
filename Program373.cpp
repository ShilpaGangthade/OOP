#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int Length)
{
    T Sum = 0;
    int iCnt = 0;

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