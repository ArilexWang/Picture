#ifndef PICTURE_H_
#define PICTURE_H_
#include<iostream>
using namespace std;
class P_NODE;

class Picture
{
public:
	Picture(const char* const*, int);
	Picture(const Picture&);
	int height() const;
	int width()	const;
	void display(ostream&, int, int) const;
	~Picture();

	Picture operator=(const Picture&);

private:
	friend ostream& operator<<(ostream&, const Picture&);
	friend Picture frame(const Picture&);
	friend Picture operator&(const Picture&, const Picture&);
	friend Picture operator|(const Picture&, const Picture&);
	Picture(P_NODE*);
	P_NODE* p;
};

#endif // !PICTURE_H_
