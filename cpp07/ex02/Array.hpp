#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <iostream>
#include <string>

template<typename T>
class Array{
    private : 
        T *array;
        int _size;
    public : 
        Array() : array(NULL), _size(0){}
        Array(const int &n) : _size(n) {
            array = new T[n];
        }
        ~Array(){
            delete[] array;
        }
        Array(const Array<T>& other){
            this->_size = other._size;
            this->array = new T[_size];
            for(int i = 0; i < other._size; i++){
                this->array[i] = other.array[i];
            }
        }
        Array<T>& operator=(const Array<T>& other){
            if(this != &other){
                if(this->array)
                    delete[] array;
                this->_size = other._size;
                this->array = new T[other._size];
                for(int i = 0; i < other._size; i++){
                    this->array[i] = other.array[i];
                }
            }
            return *this;
        }
        
        int size() const {
            return(_size);
        }
        
        const T& operator[](int index) const {
            if(index < 0 || index >= _size)
                throw OOB();
            return(array[index]);
        } 

        T& operator[](int index) {
            if(index < 0 || index >= _size)
                throw OOB();
            return(array[index]);
        } 

        class OOB : public std::exception{
            public : 
                virtual const char* what() const throw(){
                    return ("ERROR INDEX");
                }
        };

};






#endif