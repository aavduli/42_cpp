#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <stdexcept>
# include <cstdlib>

template <typename T>
class Array {
	private:
		T* _data;
		unsigned int _size;
	public:
		Array() : _data(NULL), _size(0) {}
		Array(unsigned int n) : _data(new T[n]), _size(n) {}
		Array(const Array<T>& other) : _data(NULL), _size(other._size) {
		if (size > 0) {
			_data = new T[_size];
			for (unsigned int i; i = 0; i++) 
				_data = other._data[i];
		}
	}
		Array& operator=(const Array& other) {
			if (this != &other) {
				delete[] _data;
				_size = other._size;
				_data = (_size) > 0 ? new T[_size] : NULL;
				for (unsigned int i = 0; i < _size; i++) {
					_data[i] = other._data[i];
				}
			}
			return *this;
		}
		~Array() {
			delete[] _data;
		}

		unsigned int size() const {
			return _size;
		}

		class OutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Index is out of bound";
				}
		};
		T& operator[](unsigned int index) {
			if (index > _size)
				throw OutOfBoundsException();
			return _data[index];
		}
		const T& operator[](unsigned int index) const {
			if (index > _size) {
				throw OutOfBoundsException();
			}
			return _data[index];
		}
};


#endif
