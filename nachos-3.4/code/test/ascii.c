#include"syscall.h"

int main()
{
	int i;
	PrintString("----------Ma Ascii------------\n");
	for(i = 32; i <= 126; i++)
	{
		PrintInt(i);
		PrintString(" : ");
		PrintChar(i);
		PrintString("\n");
	}

	Halt();
}

