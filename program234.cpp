// Problems on N numbers And Digits
// Object Oriented Desining (Class desining thinking)
// Heavy weighted program than previous one
// Modular approch
// Write a program which accepts the N numbers from user and give the sum of its digits.

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
        
        int SumDigits(int iNo)
        {
                int iSum = 0;
            
                while (iNo != 0)
                {
                    iSum = iSum + (iNo % 10);
                    iNo = iNo / 10;
                }
                return iSum;
        }

        void DisplayDigitsSum()
        {
            int i = 0, iRet = 0;

            for (i = 0; i < iSize; i++)
            {
               iRet = SumDigits(Arr[i]);
               cout<<"Sum of digits "<<Arr[i]<<" is "<<iRet<<endl;
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
    
    aobj->DisplayDigitsSum();

    delete aobj;       // Dynamic memory Deallocation

    return 0;
}