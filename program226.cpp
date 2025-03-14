// Problems on N numbers
// Object Oriented Desining (Class desining thinking)
// Static Object Creation
// Write a program which takes the elements from user and display it by Object Oriented Way.

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

        void Display()
        {
            int i = 0;

            cout<<"Entered the elements : "<<endl;
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();
    
    return 0;
}