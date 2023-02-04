#include<iostream>
using namespace std;
void Example(int rows);
void Examplenested(int rows);

main()
{
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    Examplenested(rows);
    Example(rows);
    

}
void Example(int rows)
{
    for (int i=rows; i >= 1 ; i=i-1)
    {
        for (int z=rows; z>i; z=z-1)
        {
            cout << " ";
        }
        for(int j=1; j <= i; j=j+1)
        {
            cout<< "*";
        }
        cout << endl;
    }
}
void Examplenested(int rows)
{
    for (int i=1; i <= rows; i=i+1)
    {
        for (int z=rows; z>i; z=z-1)
        {
            cout << " ";
        }
        for(int j=1; j <= i; j=j+1)
        {
            cout<< "*";
        }
        cout << endl;
    }
}    