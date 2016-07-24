#include<iostream>
#include "Picture.h"

int main()
{
	char *init[] = { "Paris","in the","spring" };
	Picture p(init, 3);
	cout << p << endl;
	p = frame(p); 
	cout << p << endl;
	system("pause");
}