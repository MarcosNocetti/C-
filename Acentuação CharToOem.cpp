#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

main(){
//*********************************Duas Variaveis*****************************//???

/*
char Frase[50] = "C�o Pe�a C�u J�";
char Frase2[50];
strcpy(Frase2, Frase);
CharToOem(Frase2, Frase);
printf("%s\n", Frase);
*/

//******************************Uma Variavel**********************************//

char Frase[50];
strcpy(Frase, "C�o Pe�a C�u J�");
CharToOem(Frase, Frase);
printf("%s\n", Frase);

system("pause");

}
