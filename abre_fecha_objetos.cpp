#include <conio.h>
#include <stdio.h>
#include <windows.h>

HWND janela;
int main()
{
janela = FindWindow(0,"Calculadora");
if(janela==0)
printf("Janela nao encontrada.");
else
EnableWindow(janela,false);
//true habilita a janela
//getch();
return 0;
}
