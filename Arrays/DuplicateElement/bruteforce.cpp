#include<iostream>
using namespace std;

//BruteForce Approach
int main()
{
    int arr[100];
    int size, i, j, count;

    /* Input size of array */
    cout << "Enter size of array: ";
    cin >> size;

    /* Input elements in array */
    cout << "Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    for(i=0; i<(size-1); i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count == 2)
        {
            cout << arr[i] << " occurs " << count << " times" << endl;
        }
    }
   
    return 0;
}