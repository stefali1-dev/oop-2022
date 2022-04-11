#pragma once
#include <stdlib.h>
template <typename T>

class Vector {
	T* List;
	int len;
public:
	Vector();
	void push(T val);
	T& pop();
	T get(int index);
	int count();
};

template<typename T>
inline Vector<T>::Vector(): len(0)
{
	this->List = (T*)malloc(1 * sizeof(T));
}

template<typename T>
inline void Vector<T>::push(T val)
{
	this->List[len] = val;
	this->len++;
	this->List = (T*)realloc(this->List, (len + 1)*sizeof(T));
}

template<typename T>
inline T& Vector<T>::pop()
{
	return List[--len];
}

template<typename T>
inline T Vector<T>::get(int index)
{
	return List[index];
}

template<typename T>
inline int Vector<T>::count()
{
	return len;
}
