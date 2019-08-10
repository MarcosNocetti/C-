#include <conio.h> 
#include <stdio.h> 
#include <windows.h> 
POINT ponto; 
int main() 
{ 
GetCursorPos(&ponto); 
printf("Horizontal: %d\nVertical: %d",ponto.x,ponto.y); 
getch(); 
return 0; 
}
