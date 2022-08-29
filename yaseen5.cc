#include <iostream>
using namespace std;
//Bubble Sort Algorithm
void bubble_sort(int* arr, size_t len)
{
    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j + 1 < len - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {8, -901, 89, 0, 18, 791, -87};
    size_t len = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, len);
    cout<<"The descendingly sorted array is: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
