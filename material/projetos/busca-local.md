# Solução Busca local

Vamos agora implementar uma estratégia de **Busca local** como fizemos na [aula 07](/aulas/07-busca-local). Nossa estratégia de busca local será composta por três passos:

!!! quote "Passo 1"
    Cada objeto é atribuído para uma pessoa aleatória.

!!! quote "Passo 2"
    1. Selecione a pessoa `P` com o menor valor.
    2. Passe por todos os outros objetos e verifique se esse objeto poderia ser doado para `P`.
        * **Um objeto pode ser doado se o valor total do doador tirando o objeto doado é maior que o valor total da pessoa `P`.**
        * Se for possível, faça a doação, calcule o novo *MMS*.

!!! quote "Passo 3"
    Repita o *Passo 2* até que não seja mais possível.

Para auxiliar o entendimento desta busca local, responda as seguintes perguntas.

!!! question short
    O *Passo 2* da nossa estratégia nunca diminui o *MMS*. Por que?

!!! question short
    Conseguimos saber de antemão quantas vezes repetiremos *Passo 2*?

## Variáveis de ambiente

Nosso programa será controlado por três variáveis de ambiente:

* `SEED` controla o seed usado em nosso gerador de números aleatórios. Se não for passado, assuma `SEED = 0`;
* `ITER` controla o número de vezes que repetimos a estratégia delineada acima. Se não for passado, assuma `ITER = 100000`;
* `DEBUG`: mostra informações auxiliares para ajudar a correção automática. Se não for passado, assuma `DEBUG = 0`;

Ao rodar com `DEBUG=1` seu programa deverá mostrar na saída de erros `cerr` uma linha para cada resultado final do processo de busca local. Ou seja, deverá mostrar `ITER` linhas no formato abaixo:

```
valor a1 ... aN
```

* `valor` contém o valor do *MMS* da solução
* `aI` contém a pessoa que possui o objeto `I`

Note que o formato dessa saída é diferente da saída final do programa, porém a informação representada é a mesma.

## Validação de resultados

A pasta `heuristica` do repositório de entregas contém arquivos de exemplo `in*.txt/out*.txt` com as entradas e saídas possíveis para esta parte do projeto. Use-os para validar seu programa junto com `corretor.py`.

!!! warning
    Esta validação não espera resultados idênticos aos das saídas de exemplo.

A validação testará se seu programa tem as seguintes propriedades:

* a solução final é ótima local. Ou seja, não é possível repetir o *Passo 2* e conseguir uma solução melhor
* a solução final é valida.
* as soluções de cada busca local mostradas quando `DEBUG=1` também são ótimos locais
* a solução final é a melhor entre todas as soluções calculadas
* soluções diferentes são geradas quando valores de `SEED` diferentes são passados
* são mostradas `ITER` linhas na saída de erros e cada linha corresponde a uma solução válida
