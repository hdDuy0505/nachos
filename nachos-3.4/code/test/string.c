#include"syscall.h"
char s[256];

int main()
{
	int a;
	PrintString("Nhap do dai chuoi: ");
	a = ReadInt();
	PrintString("Nhap chuoi: "); 
	ReadString(s, a);
	PrintString("\nChuoi da nhap: "); 
	PrintString(s);
	Halt();
}

