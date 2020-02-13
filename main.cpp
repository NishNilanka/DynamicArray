#include <iostream>

#include "dynamicarray.h"


int main(int argc, char *argv[])
{
    DynamicArray<Student> list = DynamicArray<Student>(4);

    Student s1 = Student(1, "Nishan", 27);
    Student s2 = Student(2, "ABC", 22);
    Student s3 = Student(3, "DEF", 23);
    list.insert(1,s1);
    list.insert(2,s2);
    list.resize(5);
    list.insert(4,s3);
    Student s4 = Student(4, "DEF", 23);
    list.extend(3);
    list.insert(10,s4);
    list.showList();
    list.removeItem(1);
    list.showList();

    for(DynamicArray<Student>::iterator i = list.begin(); i != list.end(); i++)
    {
        cout << (*i).getName() << "\t|";
    }

    return 0;
}