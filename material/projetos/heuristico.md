# Solução heurística

Um bom princípio para dividir os objetos entre pessoas é

!!! quote "Dividir o número de objetos por pessoa de maneira mais igualitária possível"

Ou seja, nossa heurística irá mirar em divisões em que cada pessoa recebe ao menos `N/M` objetos (arredondado para baixo). Nossa estratégia para esta divisão será

!!! quote "Ordenar objetos por valor e atribuí-los sequencialmente para cada pessoa. Ao chegar ao fim da lista de pessoas continuamos o processo com a primeira pessoa."

Esta heurística funciona muito bem quando os pesos são idênticos (ou muito parecidos), de maneira que a primeira "leva" de atribuições não crie grande diferença de valor entre a primeira e a última pessoa.

## Validação de resultados

A pasta `heuristica` do repositório de entregas contém arquivos de exemplo `in*.txt/out*.txt` com as entradas e saídas esperadas para esta parte do projeto. Use-os para validar seu programa junto com `corretor.py`.
