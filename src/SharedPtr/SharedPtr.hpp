#include <iostream>

using namespace PersonNamespace;
 
template <typename T>
 
class Shared_ptr 
{
public:
    // Constructor
    explicit Shared_ptr(T* ptr = nullptr)
    {
        m_ptr = ptr;
        int m_counter = 0;
        (m_counter)++;
    }
 
    // Copy constructor
    Shared_ptr(Shared_ptr<T>& sp)
    {
        m_ptr = sp.m_ptr;
        m_counter = sp.m_counter;
        (m_counter)++;
    }
 
    // Reference count
    unsigned int use_count() 
    { 
      return m_counter; 
    }
 
    // Get the pointer
    T* get() 
    { 
      return m_ptr; 
    }
 
    // Overload -> operator
    T* operator->() 
    { 
      return m_ptr;
    }
 
private:
    // Shared pointer
    T* m_ptr;
    int m_counter;
};
