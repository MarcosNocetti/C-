#include <conio.h>
#include <stdio.h>
#include <windows.h>
SYSTEMTIME tempo;

int main()
{
GetLocalTime(&tempo);
printf("%d/%d/%d",tempo.wDay,tempo.wMonth,tempo.wYear);
getch();
return 0;
}
