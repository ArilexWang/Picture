#ifndef STRING_PIC_H_
#define STRING_PIC_H_
#include "P_Node.h"
#include <string.h>
class String_Pic: public P_NODE
{
	friend class Picture;
	String_Pic(const char* const*, int);
	int height() const;
	int width() const;
	void display(ostream&, int, int) const;
	~String_Pic();
	char** data;
	int size;
	
};


#endif // !STRING_PIC_H_

