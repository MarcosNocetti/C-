#include <windows.h>
char nome[255];
DWORD size=255;
int main()
{
GetUserName(nome,&size);
MessageBox(0,nome,"Nome do usu�rio",MB_OK|MB_ICONINFORMATION);
return 0;
}
