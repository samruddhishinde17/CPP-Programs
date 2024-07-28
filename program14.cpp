//Using FILTER concept
//Accept the no from user as a percentage and display whether the student pass or fail

#include<iostream>
using namespace std;

bool DisplayResult(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks > 100.0f))        //Filter
    {
        cout<<"Invalid Input\n";
        return false;
    }
   
    if ((fMarks > 0.0f) && (fMarks < 35.0f))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    float fNo = 0.0f;
    bool bRet = false;

    cout<<"Enter your Percentage = "<<endl;
    cin>>fNo;

    bRet = DisplayResult(fNo);

    if (bRet == true)
    {
        cout<<"Student is pass in the exam";
    }
    else
    {
        cout<<"Student is fail in the exam\n";
    }
    
    return 0;
}

