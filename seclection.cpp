#include <iostream>
using namespace std;

void select(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        int chotu = i;
        for (int j = chotu + 1; j < s; j++)
        {
            if (arr[chotu] > arr[j])
            {
                chotu = j;
            }
        }
        if (chotu != 1)
        {
            int temp;
            temp = arr[chotu];
            arr[chotu] = arr[i];
            arr[i] = temp;
        }
    }
}
int main()
{
    int arr[] = {4, 23, 1, 5, 6, 7};
    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << endl;
    }
    select(arr, s);
    cout << "After applyning selction sort";
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<endl;
    }
}