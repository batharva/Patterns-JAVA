#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter No. Of Rows:";
    cin>>rows;
    for(int i =1 ; i<=rows;i++){
        //spaces
        int spaces = rows-i;
        for(int j =1; j<=spaces;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //inverted
    for(int i =rows ; i>=1;i--){
        //spaces
        int spaces = rows-i;
        for(int j =1; j<=spaces;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}