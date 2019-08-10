#include<stdio.h>
#include<windows.h>

main()
{ 

 (NULL, "Texto", "Informativa", MB_OK + MB_ICONINFORMATION);
MessageBox(NULL, "Texto", "Erro",MB_OK + MB_ICONERROR);
MessageBox(NULL, "Texto", "Exclamação",MB_OK + MB_ICONEXCLAMATION);

if (MessageBox(0,"Deseja sair do programa","SAIDA",MB_YESNO + MB_ICONQUESTION)==IDYES)
{
exit(0);
}
printf("\tAperte qualquer tecla para encerrar\n\n");
system("pause");

}


/*
MB_OK -> OK.
MB_OKCANCEL -> OK,CANCELAR.
MB_ABORTRETRYIGNORE -> ANULAR, REPETIR, IGNORAR.
MB_YESNOCANCEL -> SIM, NÃO, CANCELAR.
MB_YESNO -> SIM, NÃO.
MB_RETRYCANCEL ->REPETIR, CANCELAR.

Valores para 'ÍCONE':

MB_ICONERROR -> ERRO
MB_ICONQUESTION -> AJUDA
MB_ICONWARNING -> EXCLAMAÇàO
MB_ICONINFORMATION -> INFORMAÇÃO
*/
