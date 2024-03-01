#include "List.h"

// Member function definitions
template <typename T>
void List<T>::add(const T& item) {
    if (itemCount < 100) {
        items[itemCount++] = item;
    } else {
        std::cerr << "List is full. Cannot add more items.\n";
    }
}

template <typename T>
T List<T>::get(int i) const {
    if (i >= 0 && i < itemCount) {
        return items[i];
    } else {
        std::cerr << "Index out of bounds.\n";
        return T();  // Return a default-constructed value if index is out of bounds
    }
}

template <typename T>
void List<T>::remove(int i) {
    if (i >= 0 && i < itemCount) {
        for (int j = i; j < itemCount - 1; ++j) {
            items[j] = items[j + 1];
        }
        --itemCount;
    } else {
        std::cerr << "Index out of bounds. Cannot remove item.\n";
    }
}

template <typename T>
int List<T>::size() const {
    return itemCount;
}

// Output operator override
template <typename T>
std::ostream& operator<<(std::ostream& os, const List<T>& list) {
    os << "[";
    for (int i = 0; i < list.itemCount; ++i) {
        os << list.items[i];
        if (i < list.itemCount - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

// Explicit instantiation for commonly used types
template class List<int>;
template class List<double>;
template class List<std::string>;
