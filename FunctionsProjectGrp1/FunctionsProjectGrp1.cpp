#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void InputList(int array[], int size);
int ShowMenu();
void Display(int array[], int size);
void Total(int array[], int size);

int main()
{
    int finalarray[12], option_num, total = 0;
    const int arrsize = 12;

    cout << "Enter an array of 12 digits: ";

    InputList(finalarray, arrsize);

    option_num = ShowMenu();

    if (option_num == 1)
    {
        Display(finalarray, arrsize);
    }
    else if (option_num == 2)
    {
        Total(finalarray, arrsize);
    }
    else if (option_num == 3)
    {
        
    }
    else if (option_num == 4)
    {
        
    }
    else if (option_num == 5)
    {
        
    }
    else if (option_num == 6)
    {
        
    }
    else if (option_num == 7)
    {
        
    }
    else if (option_num == 8)
    {
        
    }
    else if (option_num == 9)
    {
        
    }
    else if (option_num == 10)
    {
        
    }
    else if (option_num == 11)
    {
        
    }
    else if (option_num == 12)
    {
        
    }
    else
    {
        cout << "Invalid Number. Select One Of The 12 Options"; //error prevention, Written by naomi
    }
}

void InputList(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int ShowMenu()
{
    int optionnum;

    cout << "\n 1. Display\n 2. GetTotal\n 3. GetAverage\n 4. GetLargest\n 5. GetSmallest\n 6. GetNumOcurrences\n 7. ScaleUp\n 8. Reverse\n 9. ZeroBase\n 10. RemoveNumber\n 11. Sort\n 12. Quit\n";

    cin >> optionnum;

    return optionnum;
}

void Display(int array[], int size)
{
    for (int i = 0; i < arrsize; i++)
        {
            cout << finalarray[i] << " ";
        }
}

void Total(int array[], int size)
{
    for (int i = 0; i < arrsize; i++)
    {
       total + i;
    }
    cout << "The total of all the numbers in the array is: " << total; 
}
