#include<iostream>
using namespace std;
void example(int rows);
main()
{
int rows;
cout<<" enter number of rows :";
cin>> rows;
example(rows);
}
void example(int rows)
{
for(int i=1;i<=rows;i=i++){

for(int j=1;j<=i;j=j++){
cout<< "*";
}
cout<< endl;
}
}