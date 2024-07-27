//Accept the no from user as a percentage and display whether the student pass or fail

#include<iostream>
using namespace std;

bool DisplayResult(float fMarks)
{
    if((fMarks >= 35.0f) && (fMarks <= 100))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    float fNo = 0.0f;
    bool bRet = false;

    cout<<"Enter the percentage = "<<endl;
    cin>>fNo;

    bRet = DisplayResult(fNo);

    if(bRet == true)
    {
        cout<<"Student is PASS";
    }
    else
    {
        cout<<"Student is FAIL";
    }

    return 0;
}