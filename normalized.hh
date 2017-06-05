#ifndef INCLUDED_NORMALIZED_HH
#define INCLUDED_NORMALIZED_HH

//! A T that has been normalized by normalize.
template <typename T, T (&normalize)(T const &)>
class Normalized {
  T val;

public:
  Normalized() : val(normalize(T())) {}
  Normalized(T const & t) : val(normalize(t)) {}
  T const & operator*() const { return val; }
  T const * operator->() const { return &val; }
  operator T const &() const { return val; }
};

#endif
