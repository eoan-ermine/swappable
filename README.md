# Homework assignment: swappable

## Assignment

Let's say you want a special `std::swap` for your class. Will you specialize or overload?

## Solution

Full solution is available at [swappable/swap.hpp](swappable/swap.hpp)

### Notes

Before C++20:

*std::swap may be specialized in namespace std for program-defined types, but such specializations are not found by ADL (the namespace std is not the associated namespace for the program-defined type).*

After C++20:

*The expected way to make a program-defined type swappable is to provide a non-member function swap in the same namespace as the type: see Swappable for details.*
