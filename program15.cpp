//Using FILTER concept
//Accept the no from user as a percentage and display whether the student pass or fail

#include<iostream>
using namespace std;

int DisplayResult(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks > 100))
    {
        return 1;
    }

    if ((fMarks >= 35.0f) && (fMarks <= 100))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{
    float fNo = 0.0f;
    int iRet = 0;

    cout<<"Enter your Percentage = "<<endl;
    cin>>fNo;

    iRet = DisplayResult(fNo);

    if(iRet == 1)
    {
        cout<<"Invalid Input";
    }
    else if (iRet == 2)
    {
        cout<<"Student is pass in the exam ";
    }
    else if(iRet == 3)
    {
        cout<<"Student is fail in the exam ";
    }
    
    return 0;
}

