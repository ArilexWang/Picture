#ifndef P_NODE_H_
#define P_NODE_H_
#include"Picture.h"

class P_NODE
{
protected:
	P_NODE();
	virtual int height() const = 0;
	virtual int width() const = 0;
	int max(int, int) const;
	virtual void display(ostream&, int, int) const = 0;
	virtual ~P_NODE() {	}

private:
	friend class Picture;
	int use;

};

static void pad(ostream& os, int x, int y) {
	for (int i = x; i < y; i++) {
		os << " ";
	}
}

#endif // !P_NODE_H_

