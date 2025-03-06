// Problems on N numbers And Digits
// Object Oriented Desining (Class desining thinking)
// Heavy weighted program than previous one
// Modular approch
// Write a program which accepts the N numbers from user and count no of digits in each no individually.

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int No)
        {
            cout<<"Inside constructor"<<endl;
            iSize = No;
            Arr =  new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor"<<endl;
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements : "<<endl;
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }
        
        int CalculateDigits(int iNo)
        {
                int iCount = 0;
            
                while (iNo != 0)
                {
                    iCount++;
                    iNo = iNo / 10;
                }
                return iCount;
        }

        void DisplayDigitsCount()
        {
            int i = 0, iRet = 0;

            for (i = 0; i < iSize; i++)
            {
               iRet = CalculateDigits(Arr[i]);
               cout<<Arr[i]<<" contains "<<iRet<<" digits in it"<<endl;
            }
             
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);   //Dynamic Object Creation

    aobj->Accept();
    
    aobj->DisplayDigitsCount();

    delete aobj;       // Dynamic memory Deallocation

    return 0;
}