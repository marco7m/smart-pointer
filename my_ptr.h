// criado por Marco Aurélio
// 10/2016

#ifndef MY_PTR_H
#define MY_PTR_H

template<class T>
class my_ptr{
public:
    my_ptr(int s);
    my_ptr();

    void del();

    T *ptr;
    int size;
};

template<class T> my_ptr<T>::my_ptr(int s){
    ptr = new T[s];
    size = s;
}

template<class T> my_ptr<T>::my_ptr(){
    ptr = nullptr;
    size = 0;
}

template<class T> void my_ptr<T>::del(){
    if(ptr != nullptr){
        delete[] ptr;
        ptr = nullptr;
    }
    size = 0;
}

#endif
