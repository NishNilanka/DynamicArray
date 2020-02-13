#include "dynamicarray.h"

using namespace std;
template <typename T>
DynamicArray<T>::DynamicArray(int initSize)
{
    size = initSize;
    list = new T[size];

}


template <typename T>
DynamicArray<T>::~DynamicArray()
{
    delete[] list;
}

//insert a given value to a specific postion. if that position is out of the size, then re-allocate memory for that and insert value
template <typename T>
void DynamicArray<T>::insert(int position, T value)
{
    if (position-1 >= size)
        resize(position +1);
    list[position] = value;
    
}
template <typename T>
T DynamicArray<T>::get(int position)
{
    return list[position];
}

template <typename T>
int DynamicArray<T>::getSize()
{
    return size;
}

//remove a given item and reduce the size of the array by one. Dynamically allocate memory for the array
template <typename T>
bool DynamicArray<T>::removeItem(int position)
{
    if (position < size)
    {  
        int newSize = size - 1;
        T *temp = new T[newSize];
        int j=0;
        for(int i =0; i < size; i++)
        {
            if(i == position)
                continue;
            else
            {
                 temp[j] = list[i];
                 j++;
            }
        }
        delete[] list;
        list = temp;
        size = size -1;
        return true;
    }
    else
    {
        cout << "Invalid Index" << endl;
        return false;
    }
}
template <typename T>
void DynamicArray<T>::showList()
{
    for (int i = 0; i< size; i++)
    {
        cout << list[i].getName() << "\t|";
    }

    cout << endl;
}

//Extend array by a given size
template <typename T>
void DynamicArray<T>::extend(int extendSize)
{
    int newSize = extendSize+ size;
    T *temp = new T[newSize];
    for (int i = 0; i < size; i++)
    {
        
        temp[i] = list[i];
    }
    
    delete[] list;
    list = temp;
    delete[] temp;
    size = newSize;
}

//Resize Dynamic array to a given size
template <typename T>
void DynamicArray<T>::resize(int newSize)
{
    T *temp = new T[newSize];
    for (int i = 0; i < size; i++)
    {
        temp[i] = list[i];
    }

    delete[] list;
    list = temp;
    delete[] temp;
    size = newSize;
}



//Need to declare template types that we are using. Otherwise undefined reference error
template class DynamicArray<Student>;