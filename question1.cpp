#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the values of rows and colomns ";
    cin>>m>>n;
    int count=0;
    int array[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cin>>array[i][j];
        count++;
        }
    }
    cout<<count;
return 0;
}