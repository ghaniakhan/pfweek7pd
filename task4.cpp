#include<iostream>
using namespace std;
void amplified(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    amplified(number);
}
void amplified(int number)
{
   for(  int x=1; x<=number ; x++ )
   {
    if(x%4==0)
    {
        cout<<x*10<<" ";
        continue;
    }
    cout<<x<<" ";
   }
}