#include "String_Pic.h"
#pragma warning(disable:4996)



String_Pic::String_Pic(const char* const* p, int n)
	:data(new char*[n]), size(n)
{
	for (int i = 0; i < n; i++) {
		data[i] = new char[strlen(p[i]) + 1];
		strcpy(data[i], p[i]);
	}
}

int String_Pic::height() const
{
	return size;
}

int String_Pic::width() const
{
	int n = 0;
	for (int i = 0; i < size; i++) {
		n = max(n, strlen(data[i]));
	}
	return n;
}

void String_Pic::display(ostream& os, int row, int width) const
{
	int start = 0;
	if (row >= 0 && row < height()) {
		os << data[row];
		start = strlen(data[row]);
	}
	pad(os, start, width);
}

String_Pic::~String_Pic()
{
	for (int i = 0; i < size; i++) {
		delete[] data[i];
	}
	delete[] data;
}
