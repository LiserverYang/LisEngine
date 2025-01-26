/**
 * Copyright 2025, LiserverYang. All rights reserved.
 * 
 * Defined class Array.
 */

#include <malloc.h>

template<class T, size_t N>
class Array
{
private:
    T *m_data;

public:
    Array()
    {
        m_data = new T[N];
    }

    ~Array()
    {
        for (size_t i = 0; i < N; i ++)
        {
            m_data[i].~T();
        }

        delete[] m_data;
    }

    T &get(size_t pos)
    {
        if (pos > N)
        {
            return T();
        }

        return m_data[pos];
    }

    T &operator[](size_t pos)
    {
        return m_data[pos];
    }
};

void test();