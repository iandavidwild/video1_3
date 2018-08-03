//============================================================================
// Name        : Video1_3b.cpp
// Author      : Ian Wild
// Version     :
// Copyright   :
// Description : More on templates
//============================================================================

template <class T>
class CPair {
  private:
    T a, b;
  public:
    CPair (T first, T second)
      {a=first; b=second;}
    T GetLarger ();
    T GetSmaller ();
};

template <class T>
T CPair<T>::GetLarger () {
  T result;
  result = (this->a > this->b)? this->a : this->b;
  return (result);
}

template <class T>
T CPair<T>::GetSmaller () {
  T result;
  result = (a<b)? a : b;
  return (result);
}
