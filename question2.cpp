#include <iostream>
#include <vector>
using namespace std;
int main()
{
int n;
cin>>n;
int mat[n][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cin>>mat[i][j];
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<i;j++)
{
swap(mat[i][j],mat[j][i]);
}
}


cout<<endl;

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<mat[i][j]<<" ";
}
cout<<endl;
}
}