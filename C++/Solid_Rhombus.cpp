#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter number of rows:";
    cin>>rows;
    for(int i = 1 ; i<=rows;i++){
        int spaces = rows - i;
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j = 1;j<=rows;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}