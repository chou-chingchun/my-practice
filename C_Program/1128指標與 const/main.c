#include <stdio.h>
#include <stdlib.h>

int main()
{
	char strA[]="test";
	char* strB="test";
	const char* strC="test";
	//strA=strB; //char*不能直接=char[] 
	//strA=strC; //const char*不能直接=char[] 
	//strB=strA;//char[]可以直接=char* 
	//strB=strC; //const char*不能直接=char*，編譯會過但是是為定義的行為 
	//strC=strA;//char[]會先隱性轉型成*形式，所以char*可以=const char*(原本可讀可寫，變成只可讀) 
	//strC=strB; // char*=const char*(原本可讀可寫，變成只可讀)
	 
	return 0;
}
