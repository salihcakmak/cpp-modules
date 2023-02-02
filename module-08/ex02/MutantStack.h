#ifndef _MUTANTSTACK_H_
#define _MUTANTSTACK_H_

#include <stack>

template<class T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() {}
	MutantStack(const MutantStack& other){
		*this = other;
	}
	MutantStack& operator=(const MutantStack& other) {
		return *this;
	}
	virtual ~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() {
		return this->c.begin();
	}

	iterator end() {
		return this->c.end();
	}
};



#endif
