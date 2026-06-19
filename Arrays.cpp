#include <iostream>
using namespace std;

int main()
 {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
   {
        cin >> arr[i];
    }

    cout << endl << "Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int largest = arr[0];
    int smallest = arr[0];
    int sum = 0;

    for (int i = 0; i < n; i++)
   {
        sum += arr[i];

        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << endl;
    cout << "Array Size: " << n << endl;
    cout << "Largest Element: " << largest << endl;
    cout << "Smallest Element: " << smallest << endl;
    cout << "Sum of Elements: " << sum << endl;

    return 0;
}