#ifndef SET_H
#define SET_H
#include "Nod.h"

class Set
{
	Nod *start;
	unsigned size;
public:
	Set();
	Set(int);
	Set(const Set&);
	void insertAt(int, int);
	void insert(int);
	void print();
	int get(int);
	unsigned length();
	void remove(int);
	Set reverse();
	bool isEmpty();
	bool has(int);
	~Set();
	int operator[](int);
	Set operator+(const Set &);
	bool operator<(const Set &);
	bool operator>(const Set &);
    void operator*(int);
    int suma();
    Set pare();
    Set impare();
    friend std::istream& operator>>(std::istream&, Set&);
    friend std::ostream& operator<<(std::ostream&, const Set&);
    void operator=(const Set&);
};

#endif

