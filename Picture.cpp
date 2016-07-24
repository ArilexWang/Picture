#include "Picture.h"
#include "String_Pic.h"

Picture::Picture(const char * const *str, int n) {
	p = new String_Pic(str, n);
}

Picture::Picture(const Picture& orig): p(orig.p)
{
	orig.p->use++;
}

int Picture::height() const
{
	return p->height();
}

int Picture::width() const
{
	return p->width();
}

void Picture::display(ostream& os, int x, int y) const
{
	p->display(os, x, y);
}

Picture::~Picture()
{
	if (--p->use == 0) {
		delete p;
	}
}

Picture Picture::operator=(const Picture& orig)
{
	orig.p->use++;
	if (--p->use == 0) {
		delete p;
	}
	p = orig.p;
	return *this;
}

Picture::Picture(P_NODE* p_node) :p(p_node) { }

ostream& operator<<(ostream& os, const Picture& picture) {
	int ht = picture.height();
	for (int i = 0; i < ht; i++) {
		picture.display(os, i, picture.width());
		os << endl;
	}
	return os;
}