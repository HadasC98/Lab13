#ifndef LIST_H
#define LIST_H

#include <iostream>

template <typename T>
class List {
private:
    T items[100];
    int itemCount;

public:
    // Constructor
    List() : itemCount(0) {}

    // Member functions
    void add(const T& item);
    T get(int i) const;
    void remove(int i);
    int size() const;

    // Output operator override
    template <typename U>
    friend std::ostream& operator<<(std::ostream& os, const List<U>& list);
};

#include "List.cpp"  // Include the implementation file

#endif // LIST_H
