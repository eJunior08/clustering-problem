#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc < 4)
  {
    printf("Existe(m) parâmetro(s) faltando. O formato deve ser o seguinte:\n");
    printf("./trab1 <nome_arquivo_entrada> k <nome_arquivo_saida>\n");
    return 0;
  }

  char *FILE_INPUT = argv[1];
  int K = atoi(argv[2]);
  char *FILE_OUTPUT = argv[3];

  return 0;
}