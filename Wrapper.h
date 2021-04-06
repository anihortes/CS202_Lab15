//
// Created by A. Harrison Owen on 4/6/2021.
//

#ifndef CS202_LAB15_WRAPPER_H
#define CS202_LAB15_WRAPPER_H
#include <ostream>
#include <sstream>
#include <string>

template<typename Typename>
class Wrapper {
public:
    Wrapper(Typename type);
    void print(std::ostream &os) const;
    void setType(const Typename &t);
    Typename getType() const;
    template<typename S>
    friend std::ostream &operator<<(std::ostream &os, const Wrapper<S> &t);
private:
    Typename _type;
};
template<typename Typename>
Wrapper<Typename>::Wrapper(Typename type) : _type(type){};

template<typename Typename>
void Wrapper<Typename>::setType(const Typename &t) {
    _type = t;
}

template<typename Typename>
Typename Wrapper<Typename>::getType() const{
    return _type;
}

template<typename Typename>
void Wrapper<Typename>::print(std::ostream &os) const {
    os << _type;
}

template<typename S>
std::ostream &operator<<(std::ostream &os, const Wrapper<S> &t){
    return os  << t.getType();
};
#endif //CS202_LAB15_WRAPPER_H