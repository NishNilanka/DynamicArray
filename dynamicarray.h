#include <iostream>
#include "student.h"

template <typename T>
class DynamicArray{

    public:
        DynamicArray(int initSize);
        ~DynamicArray();

        void insert(int pos, T value);
        T get(int position);
        int getSize();
        void extend(int extendSize);
        bool removeItem(int position);
        void showList();
        void resize(int newSize);

    class iterator
        {
            public:
                typedef iterator self_type;
                typedef T value_type;
                typedef T& reference;
                typedef T* pointer;
                typedef std::forward_iterator_tag iterator_category;
                typedef int difference_type;
                iterator(pointer ptr) : ptr_(ptr) { }
                self_type operator++() { self_type i = *this; ptr_++; return i; }
                self_type operator++(int junk) { ptr_++; return *this; }
                reference operator*() { return *ptr_; }
                pointer operator->() { return ptr_; }
                bool operator==(const self_type& rhs) { return ptr_ == rhs.ptr_; }
                bool operator!=(const self_type& rhs) { return ptr_ != rhs.ptr_; }
            private:
                pointer ptr_;
        };

iterator begin()
{
    return iterator(list);
}

iterator end()
{
    return iterator(list + size);
}

    private:
        int size;
        T *list;

};


