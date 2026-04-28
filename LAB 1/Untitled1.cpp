
#include<iostream>
using namespace std;

int main()
{
    int ar[1000];
    for(int i = 0; i < 1000; i++)
    {
        ar[i] = i;}

int item_to_search = 600;
int flag = 0, linear_search = 0;

for(int i = 0; i < 1000; i++)
    {
        linear_search++;
        if (ar[i] == item_to_search)
        {
            cout << "\nfound at index " << i << endl;
            flag = 1;
            break; //
        }
    }

    if (flag == 0)
        cout << "not found" << endl;

    cout << "step count: " << linear_search << endl;
    int low = 0;
    int high = 999;
    int binary_steps = 0;
    int mid;
    while (low <= high)
    {
        binary_steps++;
        mid = (low + high) / 2;
        if (ar[mid] == item_to_search)
        {
            cout << "Binary Search: found at index " << mid << endl;
            break;
        }
        else if (ar[mid] < item_to_search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Binary search step count: " << binary_steps << endl;

    return 0;
}
