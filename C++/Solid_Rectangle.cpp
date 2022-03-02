#include<iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter No. Of Rows:";
    cin>>rows;
    cout<<"\nEnter No. Of Columnns:";
    cin>>cols;
    for (int i = 1; i <=rows; i++)
    {
        for (int j = 1; i <=cols; i++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}