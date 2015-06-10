////////////////////////
//Name: Kathleen Levi
//
//Project: EX05_02 (12.4)
//
//Date: 09 June 2105
////////////////////////

#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
    //check to see if the elements in the array are sorted?
    bool sorted = true;
    for (int i = 0; i < size; i++)
    {
        T currentMin = list[i];
        
        for (int j = i + 1; j < size; j++)
        {
            if (currentMin > list[j])
            {
                sorted = false;
            }
        }
    }
    return sorted;
}

int main(){
    
   //test the array with int, double and string values
    int list1[] = {1, 2, 3, 4, 5};
    cout << "isSorted(list1, 5): " << isSorted(list1, 5) << endl;
    
    double list2[] = {3.4, 7.8, 1.2};
    cout << "isSorted(list2, 3): " << isSorted(list2, 3) << endl;
    
    string list3[] = {"Doug", "Amy", "Kathy"};
    cout << "isSorted(list3, 3): " << isSorted(list3, 3) << endl;
}