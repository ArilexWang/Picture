#include "Frame_Pic.h"

Frame_Pic::Frame_Pic(const Picture& pic) :p(pic) { }

int Frame_Pic::height() const
{
	return p.height()+2;
}

int Frame_Pic::width() const
{
	return p.width() + 2;
}

void Frame_Pic::display(ostream& os, int row, int wd) const
{
	if (row < 0 || row >= height()) {
		pad(os, 0, wd);
	}
	else {
		if (row == 0 || row == height() - 1) {
			os << "+";
			int i = p.width();
			while (--i>=0){
				os << "-";
			}
			os << "+";
		}
		else {
			os << "|";
			p.display(os, row - 1, p.width());
			os << "|";
		}
		pad(os, width(), wd);
	}
}

Frame_Pic::~Frame_Pic()
{
}

Picture frame(const Picture& pic)
{
	return new Frame_Pic(pic); 
}