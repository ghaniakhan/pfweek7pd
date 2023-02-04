#include<iostream>
using namespace std;
void Examplenested(int rows);
main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    Examplenested(rows);

}
void Examplenested(int rows)
{
    for (int i=rows; i>=1; i=i-1)
    {
        for(int j=1; j <= i; j=j+1)
        {
            cout<< "*";
        }
        cout << endl;
    }
}