#include <iostream>
using namespace std;

void fillArray(int arr[], int numOfElements);
void rotate(int arr[], int d, int n);
void printArray(int arr[], int n);

int main()
{
    int arr[100], numOfElements, rotateElement;
    
    cout << "How many elements you want to insert?: ";
    cin >> numOfElements;
    cout << "Please enter the elements (with a space): ";
    
    fillArray(arr,numOfElements);
    cout << "Enter the number of elements you want to rotate: ";
    cin >> rotateElement;
    cout << "Enter elements after rotation: ";
    rotate(arr, rotateElement, numOfElements);

    return 0;
    
}

void fillArray(int arr[], int numOfElements)
{
    for (int i = 0; i < numOfElements; ++i)
        cin >> arr[i];
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void rotate(int arr[], int d, int n)
{
    int temp;
    
    for (int i = 0; i < d; ++i)
    {
        temp = arr[0];
        for (int j = 0; j < n; ++j)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
    
    printArray(arr, n);
}

/* ---SAMPLE RUN----
 How many elements you want to insert?: 3
 Please enter the elements (with a space): 1 2 3
 Enter the number of elements you want to rotate: 2
 Enter elements after rotation: 3 1 2
 Program ended with exit code: 0
 */



