/*
    Q. Read admission of N students in a class and search for a given admission number in the list. Use linear Search method of searching.
 */

#include <iostream>
using namespace std;

int main(){
    int size, array[20], key, i, flag = 0;
    cout << "Enter the number of student:";
    cin >> size;
  

    for( i=0; i<size; i++){
        cout << "Enter the adission number: \n";
        cin >> array[i];
        
    }

    cout << "Enter the admission number to search:";
    cin >> key;

    for( i=0; i<size; i++){
        if (key == array[i])
        {
            flag = 1;
            cout << "Admission nubmer found at :" << key;
        }
    }
    
    if (flag == 0)
    {
        cout << "Admission number not found! \n";
    }
    
}
