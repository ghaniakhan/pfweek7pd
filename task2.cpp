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
    for (int i=1; i<= rows; i++)
    {
        for(int j=1; j<= i; j++)
        {
            cout<< "*";
        }
        cout << endl;
    }
}