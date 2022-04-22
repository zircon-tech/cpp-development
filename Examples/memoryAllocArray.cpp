/* Create an Array dinamically allocate it (at real time)
by asking the user the size of the array.

This is possible using the memory on the heap.
You can NOT create this type of array with memory on the stack
because the compiler needs to know the size of the array.
*/
#include <iostream>

using namespace std;
int main()
{
    int sizeOfArray;
    cout << "Please enter the size of the array" << endl;
    cin >> sizeOfArray;
    int *A = (int *)malloc(sizeOfArray * sizeof(int));
    for (int i = 0; i < sizeOfArray; i++)
    {
        A[i] = i + 1;
    }
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
