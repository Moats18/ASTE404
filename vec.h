#ifndef _VEC_H
#define _VEC_H

#include <ostream>
#include <math.h>

/**
 * @class _vec3
 * @brief A 3D vector class template.
 * 
 * This class represents a 3D vector and provides basic vector operations like addition,
 * subtraction, dot product, and magnitude.
 * 
 * @tparam T The data type of the vector components (e.g., float, double).
 */
template<typename T>
class _vec3{
public:
    /**
     * @brief Default constructor for the vector.
     * Initializes all components to 0.
     */
    _vec3<T>(): d{0,0,0} {}

    /**
     * @brief Constructor that initializes the vector with given components.
     * 
     * @param a The x-component of the vector.
     * @param b The y-component of the vector.
     * @param c The z-component of the vector.
     */
    _vec3<T>(T a, T b, T c) : d{a,b,c} {}

    /**
     * @brief Overloaded subscript operator for accessing vector components.
     * 
     * @param i The index of the component (0 for x, 1 for y, 2 for z).
     * @return Reference to the component at index i.
     */
    T& operator[] (int i) { return d[i]; }

    /**
     * @brief Overloaded addition operator for vector addition.
     * 
     * @param a The first vector.
     * @param b The second vector.
     * @return The sum of the two vectors.
     */
    friend _vec3<T> operator+(const _vec3<T>&a, const _vec3<T>&b) {
        return _vec3<T>(a[0] + b[0], a[1] + b[1], a[2] + b[2]);
    }

    /**
     * @brief Overloaded subtraction operator for vector subtraction.
     * 
     * @param a The first vector.
     * @param b The second vector.
     * @return The difference of the two vectors.
     */
    friend _vec3<T> operator-(const _vec3<T>&a, const _vec3<T>&b) {
        return _vec3<T>(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
    }

    /**
     * @brief Calculates the dot product of two vectors.
     * 
     * @param a The first vector.
     * @param b The second vector.
     * @return The dot product of the vectors.
     */
    friend T dot(const _vec3<T>&a, const _vec3<T>&b) {
        return a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
    }

    /**
     * @brief Calculates the magnitude of the vector.
     * 
     * The magnitude is calculated as:
     * \f$ ||a|| = \sqrt{a_x^2 + a_y^2 + a_z^2} \f$
     * where \f$ a_x \f$, \f$ a_y \f$, and \f$ a_z \f$ are the components of the vector.
     * 
     * @return The magnitude of the vector.
     */
    friend double mag(const _vec3<T>&a) {
        return sqrt(dot(a, a));
    }

    /**
     * @brief Stream insertion operator for printing the vector.
     * 
     * @param out The output stream.
     * @param a The vector to be printed.
     * @return The output stream with the vector components.
     */
    friend std::ostream& operator<<(std::ostream &out, const _vec3<T>&a) {
        out << a[0] << " " << a[1] << " " << a[2];
        return out;
    }

protected:
    T d[3];  ///< Array storing the components of the vector (x, y, z).
};

/**
 * @brief Alias for a vector of type double.
 */
using double3 = _vec3<double>;  ///< Assign a nickname to _vec3 with type double.

#endif

