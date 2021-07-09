# Paralelismo em GPU

Seu trabalho nesta atividade será criar uma implementação paralela em GPU do algoritmo de busca local.

## Compilação do programa

Você deverá colocar o código de seu programa em um arquivo com extensão *.cu* na pasta da busca local. Este programa será compilado com `nvcc -O3`. 

## Correção automática

Seu programa deverá ter comportamento idêntico a busca local sequencial.  Ou seja, deverá suportar as mesmas opções com `DEBUG` e `ITER`.

Execute o corretor com o argumento `local-gpu` para rodar somente estes testes.
