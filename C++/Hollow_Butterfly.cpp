#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter No. Of Rows:";
    cin>>rows;
    for(int i =1 ; i<=rows;i++){
        //Hollow Half Triangle
        for(int j=1 ; j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        //spaces
        int spaces=2*(rows-i);
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        //Hollow Half Triangle
        for(int j=1 ; j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    //Inverted Pyramid
    for(int i =rows ; i>=1;i--){
        //Hollow Half Triangle
        for(int j=1 ; j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        //spaces
        int spaces=2*(rows-i);
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        //Hollow Half Triangle
        for(int j=1 ; j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}