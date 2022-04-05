#include<iostream>
using namespace std;

//BruteForce Approach
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;

    /* Input size of array */
    cout << "Enter size of array: ";
    cin >> size;

    /* Input elements in array */
    cout << "Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin >> arr[i];

        /* Initially initialize frequencies to -1 */
        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    cout << "\nFrequency of all elements of array : \n" << endl;
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            cout << arr[i] << " occurs at " <<  freq[i] << " times "<<endl;
        }
    }
    return 0;
}