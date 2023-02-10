#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int array[n][m];
    int count=0;
    for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
    cin>>array[i][j];
}
    }
    vector <vector <int> > row;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if (array[i][j]==0){
            row.push_back({i,j});

        }
    }
}
int k=0;
int l=0;

for(int i=0;i<=count;i++){
   int b=row[k][l++];
   int c=row[k][l++];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if (i==b or j==c){
            array[i][j]=0;
        }
    }
   }
    
   
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}