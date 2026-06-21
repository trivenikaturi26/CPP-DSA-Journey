#include <iostream>
using namespace std;

int main() 
{
    int n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int position = -1;

    for(int i = 0; i < n; i++) 
   {
        if(arr[i] == key)
       {
            position = i;
            break;
        }
    }

    if(position != -1) 
   {
        cout << "Element " << key << " found at position "
             << position + 1 << endl;
    }
    else 
   {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}

