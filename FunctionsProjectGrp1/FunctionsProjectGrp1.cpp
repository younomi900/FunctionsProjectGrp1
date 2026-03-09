#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void InputList(int array[], int size);
void ShowMenu();

int main()
{
    int finalarray[12];
    const int arrsize = 12;

    cout << "Enter an array of 12 digits: ";

    InputList(finalarray, arrsize);

    for (int i = 0; i < arrsize; i++)
    {
        cout << finalarray[i] << " ";
    }

    ShowMenu();
}

void InputList(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void ShowMenu()
{
    int optionnum;

    cout << "\n 1. Display\n 2. GetTotal\n 3. GetAverage\n 4. GetLargest\n 5. GetSmallest\n 6. GetNumOcurrences\n 7. ScaleUp\n 8. Reverse\n 9. ZeroBase\n 10. RemoveNumber\n 11. Sort\n 12. Quit\n";

    cin >> optionnum;
}

