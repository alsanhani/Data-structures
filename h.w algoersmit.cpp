#include<iostream> 
using namespace std;
int main()
{
int a[3][3],j,i;
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
if(i==j)
a[i][j]=1;
else
a[i][j]=0;}
for(i=0;i<3;i++)
{cout<<endl;
for(j=0;j<3;j++)
cout<<a[i][j]<<" ";}
return 0;
}
