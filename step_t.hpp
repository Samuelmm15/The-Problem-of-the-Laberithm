// Esta clase se encarga de almacenar cada uno de los pasos que se realizan en el laberinto para poder encontrar
// el camino hasta el punto final. Para ello, se almacena en una estructura de datos como puede ser una lista.

#pragma once

#include <iostream>
#include <cassert>

using namespace std;

template<class T>
class step_t {
public:
  step_t(const int = 0, const int = 0);
  step_t(const step_t&); // constructor de copia
  step_t<T>& operator=(const step_t<T>&);
  ~step_t();

  // getters
  int get_row(void) const;
  int get_col(void) const;

  // setters
  void set_row(const int);
  void set_col(const int);

  void write(ostream& = cout) const;
  void read(istream& = cin);

  private:
    T row_, col_;
};

template<class T>
step_t<T>::step_t(const int row, const int col) :
  row_(row),
  col_(col) {
}

template<class T>
step_t<T>::step_t(const step_t& s) :
  row_(s.get_row()),
  col_(s.get_col()) {
}

template<class T>
step_t<T>& step_t<T>::operator=(const step_t<T>& s) {
  row_ = s.get_row();
  col_ = s.get_col();
  return *this;
}

template<class T>
step_t<T>::~step_t() {
}

template<class T>
int step_t<T>::get_row(void) const {
  return row_;
}

template<class T>
int step_t<T>::get_col(void) const {
  return col_;
}

template<class T>
void step_t<T>::set_row(const int row) {
  row_ = row;
}

template<class T>
void step_t<T>::set_col(const int col) {
  col_ = col;
}

template<class T>
void step_t<T>::write(ostream& os) const {
  os << "(" << get_row() << ", " << get_col() << ")";
}

template<class T>
void step_t<T>::read(istream& is) {
  is >> row_ >> col_;
}

template<class T>
ostream& operator<<(ostream& os, const step_t<T>& s) {
  s.write(os);
  return os;
}

template<class T>
istream& operator>>(istream& is, step_t<T>& s) {
  s.read(is);
  return is;
}