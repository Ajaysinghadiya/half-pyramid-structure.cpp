#include <iostream>//header
using namespace std;//standard
int main()//execution of program begins from here
{
    int raw;//declaring a variable name raw
    cout << "enter the number of raws";//printing a line
    cin >> raw;//taking the inpte from user in the raw variable
    for (int i = 1; i <= raw; i++)//this 1st loop begins to print the number of raws,and the raws will start from 1 to raw
    {
        for (int j = 1; j <= i; j++)/*the 2nd loop will begin to print the numbers or for the number of columns
         means the number that we want to print is defined by this 2nd loop or inner loop,this loop will begin from 
         1 and wil go to the number of raws(i for each raw)*/
        {
            cout<<i<<" ";//printing the values
        }
        cout<<endl;//moving to the next line
    }
    return 0;
}
