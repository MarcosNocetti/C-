#include <windows.h>
char dir[255];
int main() {
GetCurrentDirectory(255,dir);
MessageBox(0,dir,"Diretório:",MB_OK|MB_ICONINFORMATION);
return 0;
}
