#include "stdafx.h"
#include "iostream"
#include "string.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char str[255];
	cout << "Enter string: ";
	cin >> str;
	int len = strlen(str);
	int indNum = len - 1;
	for(int i = 0; i < len && i <= indNum; i++){
		short code = (short) str[i];
		if(code >= 48 && code <= 57){
			char c = str[i];
			str[i] = str[indNum];
			str[indNum] = c;
			indNum -= 1;
			i -= 1;
		}
	}
	cout << "Result: " << str << endl;
	return 0;
}
