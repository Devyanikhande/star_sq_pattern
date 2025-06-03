//write the program to star square pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows you want : ";
    cin>>n;

    for(int i =1;i<=n;i++){
        for(int j=1; j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;

}