#pragma once
#include <string>
template <class T>
class TRecord {
private:
	std::string name;
	T value;
public:
	TRecord <T>(std::string _nameT, T _value = T(0));
	TRecord<T>& operator=(const TRecord<T>& tmp);
	TRecord <T>(T _value = T(0));
	TRecord <T>(const TRecord <T>& tmp);
	~TRecord<T>();
	std::string get_name()const;
	T get_value()const;
	void set_value(const T& tmp);
};

template<class T>
inline TRecord<T>::TRecord(std::string _name, T _value) {
	name = _name;
	value = _value;
}

template<class T>
inline TRecord<T>::TRecord(T _value) {
	name = " ";
	value = _value;
}

template<class T>
inline TRecord<T>::TRecord(const TRecord<T>& tmp) {
	name = tmp.name;
	value = tmp.value;
}

template<class T>
inline TRecord<T>::~TRecord() {
}

template<class T>
inline TRecord<T>& TRecord<T>::operator=(const TRecord<T>& tmp) {
	if (this == &tmp) return *this;
	name = tmp.name;
	value = tmp.value;
	return *this;
}

template<class T>
inline std::string TRecord<T>::get_name() const {
	return this->name;
}

template<class T>
inline T TRecord<T>::get_value()const {
	return this->value;
}

template<class T>
inline void TRecord<T>::set_value(const T& tmp) {
	value = tmp;
}
