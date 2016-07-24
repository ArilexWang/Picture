#ifndef FRAME_PIC_H_
#define FRAME_PIC_H_
#include"P_Node.h"
class Frame_Pic :public P_NODE
{
	friend Picture frame(const Picture&);
	Frame_Pic(const Picture&);
	int height() const;
	int width() const;
	void display(ostream&, int, int) const;
	~Frame_Pic();

	Picture p;
};


#endif // !FRAME_PIC_H_

