// AUTOR: Samuel Martín Morales
// FECHA: 19/04/2023
// EMAIL: alu0101359526@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// TEMA: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS:

#ifndef DLL_NODET_H_
#define DLL_NODET_H_

#include <iostream>

// Clase para nodos de listas doblemente enlazadas
template <class T> class dll_node_t {
public:
    // constructores
    dll_node_t() : prev_(NULL), data_(), next_(NULL) {}  // por defecto
    dll_node_t(const T& data) : prev_(NULL), data_(data), next_(NULL) {}

    // destructor
    ~dll_node_t(void) {}

    // getters & setters
    // Permite obtener el siguiente nodo del que nos encontramos actualmente
    dll_node_t<T>* get_next(void) const { return next_; }
    // Permite establecer el siguiente nodo del que nos encontramos actualemente de la lista doblemente enlazada
    void set_next(dll_node_t<T>* next) { next_ = next; }

    // Permite obtener el nodo anterior del que nos encontramos actualmente
    dll_node_t<T>* get_prev(void) const { return prev_; }
    // Permite establecer el nodo anterior del que nos encontramos actualemente de la lista doblemente enlazada
    void set_prev(dll_node_t<T>* prev) { prev_ = prev; }

    // Permite obtener el dato del nodo
    const T& get_data(void) const { return data_; }
    // Permite establecer el dato del nodo
    void set_data(const T& data) { data_ = data; }

    // E/S
    std::ostream& write(std::ostream& = std::cout) const;

private:
    dll_node_t<T>* prev_;
    T data_;
    dll_node_t<T>* next_;
};


// E/S
template <class T> std::ostream& dll_node_t<T>::write(std::ostream& os) const {
  os << data_;
  return os;
}

#endif  // DLL_NODET_H_