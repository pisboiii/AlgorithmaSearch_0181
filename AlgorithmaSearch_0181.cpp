#include <iostream>
using namespace std;

int arr[20]; //Array to be searched
int n;      //Number of element in the array 
int i;     //Index of array element 

void input() 
{
    while (true)
    {
        cout << "enter the number of element in the array";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and 1 maximum 20 elements. \n\n"; 


    }

    //Accept array elements
    cout << "\n---------------------\n";
    cout << "enter array element \n";
    cout << "_________________________\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}
void LinearSearch() 
{
    char ch;
    int ctr; //Number of comparisons 
    int item; 

    do 
    {
        cout << "\nEnter the element you want to search: "; //Step 1
        cin >> item;

        ctr = 0;
        i = 0;
        while (i < n)
        {
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n" << item << "found at posisition" << (i + 1 ) << endl; //step 6
                break;
            }
            i++; //step 4
        }
        if (i == n)
            cout << "\n" << item << "not found in the array\n";
        cout << "\nNumber of comparisons: " << ctr << endl;

        cout << "\nContinue search (y/n): ";
        cin >> ch;

    } while ((ch == 'y') || (ch == 'Y'));
}

void display()
{
    cout << "Array elements are: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    input();
    LinearSearch(); 
    display(); 

}


