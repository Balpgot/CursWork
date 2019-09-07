#ifndef VECTOR_H
#define VECTOR_H

template <typename T>
class Vector
{
    public:
        Vector<T>();
        Vector<T>(int size);
        ~Vector<T>();
        Vector<T>(const Vector& object);
        void increaseLength();
        void expand();
        void push_back(T &object);
        void replace(int index, T object);
        void remove(int index);
        int getSize() const;
        void setSize(int size);
        void setLength(int length);
        int getLength() const;
        T& operator[] (int i);

    private:
        int size;//???-?? ?????????, ??? ??????? ???????? ??????
        int length;//??????????? ???-?? ?????????
        T *arr;
};

template <typename T>
Vector<T>::Vector():size(10),length(0)
{
    this -> arr = new T [size];
}

template <typename T>
Vector<T>::Vector(int size):size(size),length(0)
{
    if(size<0){
        this-> size = 10;
    }
    this -> arr = new T [size];
}

template <typename T>
Vector<T>::~Vector()
{
    delete [] arr;
}

template <typename T>
Vector<T>::Vector(const Vector& object):size(object.size), length(object.length)
{
    this -> arr = new T [size];
    for(int i = 0; i < length; i++){
        this -> arr[i] = object.arr[i];
    }
}


template <typename T>
void Vector<T>::push_back(T &object)
{
    if(size == length){
        this->expand();
    }

    arr[length] = object;
        length++;
}

template <typename T>
void Vector<T>::increaseLength()
{
    this->length++;
}

template <typename T>
void Vector<T>::expand()
{
    if(size != 0){
        this->size*=2;
        T *new_arr = new T[size];

        for(int i = 0; i<length; i++){
            new_arr[i]=arr[i];
        }

        delete [] arr;
        this -> arr = new_arr;
    }
    else{
       size=1;
    }
}

template <typename T>
void Vector<T>::remove(int index)
{
    if((index >= 0)&&(index<length))
    {
        length--;
        for(int i = index; i<length; i++)
            arr[i]=arr[i+1];
    }
}

template <typename T>
void Vector<T>::replace(int index, T object)
{
    if((index >= 0)&&(index<length))
    {
        arr[index] = object;
    }
}

template <typename T>
void Vector<T>::setSize(int size)
{
    this->size = size;
    this->arr = new T[size];
}

template <typename T>
int Vector<T>::getSize() const
{
    return size;
}

template <typename T>
void Vector<T>::setLength(int length)
{
    if(length>=0){
        this -> length = length;
    }
}

template <typename T>
int Vector<T>::getLength() const
{
    return length;
}

template <typename T>
T & Vector<T>::operator[] (int i)
{
    return this -> arr[i];
}


#endif // CONTAINER_H
