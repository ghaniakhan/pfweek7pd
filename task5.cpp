#include<iostream>
using namespace std;
void triangle(int number)
{
    int sum=0;
    for(int count=1; count <=number; count++)
    {
        sum=sum+count;
      
    }

  cout << sum<< endl;

}
main()
{
    int number;
    cout << "Enter triangle number: ";
    cin >> number;

    triangle(number);
}