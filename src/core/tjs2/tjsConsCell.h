//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------
// Intermediate Code Context
//---------------------------------------------------------------------------
#ifndef tjsConsCellH
#define tjsConsCellH

#include <functional>
#include <stack>
#include <memory>

namespace TJS
{

//---------------------------------------------------------------------------
class Sexp
{
public:
	virtual bool IsAtom() const { return true; }
	virtual size_t size() const { return 1; }
	virtual ~Sexp() { }
};
//---------------------------------------------------------------------------
template <typename T>	// T must inherit S
class Cell : public Sexp
{
	//typedef std::shared_ptr<Sexp> S;
	//typedef std::shared_ptr<T> A;
	//typedef std::shared_ptr<Cell<T>> C;
	//
	typedef Sexp *S;
	typedef T *A;
	typedef Cell<T> *C;
	
public:
	//typedef std::shared_ptr<T> Atom;
	typedef T *Atom;
	
	bool IsAtom() const { return false; }
	
	S Car;
	C Cdr;
	
	Cell() : Car(nullptr), Cdr(nullptr) { }
	Cell(A car) : Car(car), Cdr(nullptr) { }
	Cell(C car) : Car(car), Cdr(nullptr) { }
	Cell(A car, C cdr) : Car(car), Cdr(cdr) { }
	Cell(C car, C cdr) : Car(car), Cdr(cdr) { }
	
	~Cell() { delete Car; delete Cdr; }
	
	void push_back(A item) {
		if (!Car) { Car = item; return; }
		if (!Cdr) { Cdr = new Cell<T>(item); return; }
		Cdr->push_back(item);
		return;
	}
	void push_back(C cell) {
		if (!Car) { Car = cell; return; }
		if (!Cdr) { Cdr = cell; return; }
		Cdr->push_back(cell);
		return;
	}
	bool empty() const { return !Car && !Cdr; }
	bool IsNil() const { return empty(); }
	size_t size() const {
		size_t s = 0;
		if (Car) s += Car->size();
		if (Cdr) s += Cdr->size();
		return s;
	}
	void each(std::function<void(Atom)> fn) {
		if (Car) {
			if (Car->IsAtom()) fn((Atom)Car);
			else ((C)Car)->each(fn);
		}
		if (Cdr) Cdr->each(fn);
	}
	void const_each(std::function<void(const Atom)> fn) const {
		if (Car) {
			if (Car->IsAtom()) fn((Atom)Car);
			else ((const C)Car)->const_each(fn);
		}
		if (Cdr) Cdr->const_each(fn);
	}
	
	Atom operator[](size_t idx) {
		Cell *c = this;
		for (size_t i = 0; i < idx; ++i) c = c->Cdr;
		return (Atom)c->Car;
	}

//private:
//	class CellIterator : public std::iterator<std::forward_iterator_tag, S>
//	{
//		std::stack<Cell*> parents;
//		Cell *current;
//		CellIterator(Cell *begin) : current(begin) {  }
//	public:
//		CellIterator(const CellIterator &it) : current(it.current) { }
//		
//	public:
//		CellIterator &operator++();
//		CellIterator &operator++(int);
//		S *&operator*() { (S*)current->Car; }
//		bool operator==(const CellIterator &it) { return it.current == current; }
//		bool operator!=(const CellIterator &it) { return it.current != current; }
//		
//		 {
//			if (!current->Car->IsAtom()) {
//				parents.push(current);
//				current = (Cell*)current->Car;
//			} else if (!current->Cdr && !parents.empty()) {
//				Cell *p = parents.top();
//				parents.pop();
//				current = p->Cdr;
//			} else {
//				current = p->Cdr;
//			}
//			return *this;
//		}
//		CellIterator &operator++(Node*) {
//			auto tmp = *this;
//			
//		}
//	};
//	
//	typedef CellIterator iterator;
//	iterator begin() { }
//	iterator end() { }
//	
//	
//	
};


}
//---------------------------------------------------------------------------

#endif // tjsConsCellH