#include<iostream>
using namespace std;

int main()
{
    int *Arr = NULL;
    int iCount = 0, i = 0;

    cout<<"Enter no of elements = "<<endl;
    cin>>iCount;

    Arr = new int[iCount];

    cout<<"Enter the eleements = "<<endl;
    for (i = 0; i < iCount; i++)
    {
        cin>>Arr[i];
    }
    
    cout<<"Entered elements are : "<<endl;
    for(i = 0; i < iCount; i++)
    {
        cout<<Arr[i]<<endl;
    }

    delete []Arr;

    return 0;
}