#include <stdio.h>
#include <stdlib.h>

int main()
{
	char strA[]="test";
	char* strB="test";
	const char* strC="test";
	//strA=strB; //char*���ઽ��=char[] 
	//strA=strC; //const char*���ઽ��=char[] 
	//strB=strA;//char[]�i�H����=char* 
	//strB=strC; //const char*���ઽ��=char*�A�sĶ�|�L���O�O���w�q���欰 
	//strC=strA;//char[]�|�������૬��*�Φ��A�ҥHchar*�i�H=const char*(�쥻�iŪ�i�g�A�ܦ��u�iŪ) 
	//strC=strB; // char*=const char*(�쥻�iŪ�i�g�A�ܦ��u�iŪ)
	 
	return 0;
}
