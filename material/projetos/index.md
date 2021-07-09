# Maximin Share

Dados `M` objetos com valor `V[i], i=1..M` e `N` pessoas, desejamos dividir estes objetos de maneira mais igualitária possível. Como não é possível "quebrar" objetos, naturalmente alguns ficarão com objetos de maior valor que os outros. Nosso objetivo neste projeto é definir qual seria o *menor valor que uma pessoa deveria aceitar nesta partição*.

Para fazer isso vamos usar o seguinte procedimento: uma pessoa será responsável por fazer a partição dos objetos em `N` partes. Porém, ela deverá permitir que **todas as outras `N-1` pessoas escolham primeiro qual parte elas desejam**. Ou seja, a pessoa que fez a partição naturalmente ficará com a parte de menor valor. Portanto nosso objetivo será **maximizar** o valor da parte de **menor** valor. Chamaremos este valor de *MMS* e a atribuição que o gera de *parte 1-de-n*.

Vejamos um exemplo: separaremos 6 objetos para 3 pessoas. Os valores dos objetos são `{20, 11, 9, 13, 14, 37}`. Uma possível partição seria

```
{37}
{20, 11}
{14, 13, 9}
```

Com esta partição, o menor valor seria o do segundo grupo (31). Note que várias divisões são possíveis:

```
{37}
{20, 14}
{13, 11, 9}
```

Nesta outra partição o menor valor é o do terceiro grupo (33). Portanto, entre essas duas divisões a segunda é melhor, já que a pessoa que dividiu ganharia um valor maior.

Usaremos este problema na disciplina por uma razão bem simples: encontrar o *MMS* é uma tarefa *NP-difícil*. Ou seja, o melhor que podemos fazer neste caso para garantir a melhor solução é, no pior caso, testar todas as alocações possíveis. Claramente isso é lento, então é uma bom exemplo de aplicação de SuperComputação!

## Entrada e saída

As entradas e saídas das implementações serão padronizadas como abaixo.

**Entrada**:

```
N M
v1 ...vN
```

**Saída**:

```
MMS
objetos da pessoa 1
...
objetos da pessoa M
```

Nos esquemas acima,

* `N` = número de objetos
* `M` = número de pessoas
* `vi` = valor do objeto i
* `MMS` = valor do grupo menos valioso
* `objetos da pessoa i` = lista dos índices dos objetos que estão com a pessoa i.

Veja os exemplos de entrada e saída na pasta `entradas` do repositório do projeto.


## Técnicas estudadas e correção automática

Para cada técnica estudada em aula implementaremos versões básicas e avançadas. Também será necessário implementar versões paralelas em CPU e GPU. Veja abaixo as datas de entrega e descrições de cada técnica implementada. Em geral, o enunciado de uma parte é liberado após a data de entrega da parte anterior.

1. [Solução Heurística](heuristico) (23/03)
2. [Busca local](busca-local) (09/04)
3. [Busca exaustiva](busca-exaustiva) (16/04)
4. [Relatório preliminar](relatorio-1) (30/04)
5. [Paralelismo MultiCore](paralelismo-multicore) (21/05)
5. [Paralelismo GPU](paralelismo-GPU) (14/06)
6. [Relatório final](relatorio-2) (15/06)

Cada parte de implementação será conferida usando um script de correção checagem de resultados disponível no repositório de entregas do projeto, juntamente com instruções de uso. Registre seu usuário do github até **15/03** para ser convidado para seu repositório de entregas.

<iframe width="640px" height= "480px" src= "https://forms.office.com/Pages/ResponsePage.aspx?id=wKZwY5B7CUe9blnCjt6DO36bxJ3XetxChDUDKdweTOJURUNKWkFLSklHNk1RWlVBTUNHWEszVExOViQlQCN0PWcu&embed=true" frameborder= "0" marginwidth= "0" marginheight= "0" style= "border: none; max-width:100%; max-height:100vh" allowfullscreen webkitallowfullscreen mozallowfullscreen msallowfullscreen> </iframe>

### Instruções de correção

O corretor automático depende do pacote `grading-tools`, que deverá ser instalado como abaixo.

```shell
$> python3.8 -m pip install --user git+https://github.com/igordsm/grading-tools
```

??? tip "Python 3.8 no Ubuntu"
    Se seu `python3` é uma versão inferior ao 3.8, você pode instalá-lo com os pacotes abaixo:

    ```
    python3.8 python3.8-dev
    ```

    A partir daí poderá seguir normalmente as instruções desta página.

Com isso configurado, é só compilar seu programa e rodar `python3.8 corretor.py executavel`. Para baixar os novos exercícios é só rodar `git pull`. Os exercícios serão entregues criando um commit com sua resposta e dando `git push`.


!!! warning
    Fique atento a atualizações no seu repositório de projeto. Atualizações no corretor serão feitas ao longo do semestre, assim como serão disponibilizados novos arquivos de entrada/saída para cada parte a ser implementada.

## Avaliação

O projeto será avaliado usando rubricas para as entregas básicas. As rubricas de avaliação dos relatórios estarão descritas em suas páginas de entrega.

### Conceito D

Algum dos seguintes itens não foi entregue corretamente ou possui problemas sérios (no caso do relatório final).

1. Solução heurística
2. Busca local
3. Busca exaustiva
4. Busca local paralela (CPU)
5. Busca local paralela (GPU)
6. Relatório preliminar
7. Relatório final


### Conceito C

Todas as atividades abaixo foram validadas pelo corretor e (no caso do relatório final) alcançaram qualidade mínima exigida.

1. Solução heurística
2. Busca local
3. Busca exaustiva
4. Busca local paralela (CPU)
5. Busca local paralela (GPU)
6. Relatório preliminar
7. Relatório final

### Conceito C+

Além do já validado no conceito **C**, os relatórios entregues não tinham nenhum ponto **em desenvolvimento** ou **insatisfatório** na rubrica do relatório.

### Conceitos avançados

Além do básico, temos 7 testes extras que checam o desempenho das implementações de vocês. Cada um vale **4,0/7** pontos na nota final do projeto.

* busca local: 3 níveis
* busca global: 3 níveis
* busca local em GPU: 1 nível
