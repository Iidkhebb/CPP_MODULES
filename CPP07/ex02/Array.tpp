template <typename T>
Array<T>::Array()
{
    _array = new T[0];
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _array = new T[n];
    _size = n;
}

template <typename T>
Array<T>::Array(Array const &src)
{
    _array = new T[src._size];
    _size = src._size;
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = src._array[i];
}

template <typename T>
Array<T>::~Array()
{
    delete [] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
    if (this != &rhs)
    {
        delete [] _array;
        _array = new T[rhs._size];
        _size = rhs._size;
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = rhs._array[i];
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
    if (n >= _size)
        throw std::out_of_range("out of range");
    return _array[n];
}

template <typename T>
T const &Array<T>::operator[](unsigned int n) const
{
    if (n >= _size)
        throw std::out_of_range("out of range");
    return _array[n];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}