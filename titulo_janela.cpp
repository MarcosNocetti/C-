#include <stdio.h>
#include <windows.h>
char buffer[255];
int main()
{
GetConsoleTitle(buffer,255);
MessageBox(0,buffer,"Titulo",MB_OK);
return 0;
}
