This project has been created as part of the 42 curriculum by <casampai>, <fnunes-d>

# Push Swap

Projeto em C para ordenar uma pilha de inteiros utilizando um conjunto limitado de operações em duas pilhas, com foco em eficiência e em algoritmos adaptativos.

## Visão geral

O objetivo do projeto é ordenar uma sequência de números em ordem crescente usando apenas operações como:

- `sa` / `sb` / `ss`
- `pa` / `pb`
- `ra` / `rb` / `rr`
- `rra` / `rrb` / `rrr`

A implementação trabalha com duas pilhas, `A` e `B`, e utiliza estratégias diferentes de acordo com o tamanho da entrada, buscando minimizar o número de movimentações.

## Funcionalidades

- Validação de entrada
- Verificação de números duplicados
- Tratamento de valores fora do intervalo de `int`
- Ordenação para diferentes tamanhos de entrada
- Estratégias adaptativas para listas pequenas, médias e complexas
- Suporte a bench/medição de desempenho

## Requisitos

- Compilador C compatível com padrão C99
- Make
- Sistema operacional Linux/macOS (o projeto foi desenvolvido para ambiente Unix-like)

## Compilação

No diretório do projeto, execute:

```bash
make
```

Isso gera o executável:

```bash
./push_swap
```

## Uso

```bash
./push_swap 3 2 1 5 4
```

A saída será uma sequência de instruções que ordena a pilha. Exemplo:

```bash
pb
ra
sa
pa
```

Para testar rapidamente a quantidade de operações:

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```

## Validação da entrada

A aplicação considera entradas válidas apenas quando:

- todos os argumentos são inteiros
- não há números repetidos
- os valores estão dentro do intervalo permitido de `int`

Se a entrada for inválida, o programa encerra com erro.

## Estruturas de ordenação

O projeto separa a lógica em diferentes estratégias:

- `sort_simple`: para casos menores e mais diretos
- `sort_medium`: para entradas intermediárias
- `sort_complex`: para entradas maiores e mais desordenadas
- `sort_adaptive`: estratégia dinâmica baseada no estado atual da pilha

## Limpeza do projeto

Para remover os arquivos objeto:

```bash
make clean
```

Para remover arquivos compilados e o executável:

```bash
make fclean
```

Para recompilar tudo do zero:

```bash
make re
```

## Estrutura do projeto

- `main.c` — ponto de entrada
- `parsing.c` — validação e leitura dos argumentos
- `stack_init.c` — inicialização das pilhas
- `push.c`, `swap.c`, `rotate.c`, `rev_rotate.c` — operações básicas
- `sort_simple.c`, `sort_medium.c`, `sort_complex.c`, `sort_adaptive.c` — estratégias de ordenação
- `utils.c`, `sort_utils.c` — funções auxiliares
- `bench.c` — medição de desempenho
- `Makefile` — build do projeto

## Fontes

Abaixo estão algumas referências clássicas e materiais úteis para compreender melhor a lógica do problema e as estratégias de ordenação em duas pilhas:

- Video tutorial: https://youtu.be/wRvipSG4Mmk
- Video tutorial: https://youtu.be/Y95a-8oNqps
- GeeksforGeeks — Radix Sort: https://www.geeksforgeeks.org/dsa/radix-sort/
- Medium article: https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a

Essas fontes foram úteis para entender conceitos de ordenação, análise de complexidade e otimização do número de operações.

## Uso de IA

A IA foi utilizada como ferramenta de apoio ao desenvolvimento do projeto, principalmente para:

- entender melhor a lógica do problema e as restrições do algoritmo;
- revisar a implementação das operações sobre as pilhas;
- sugerir e validar estratégias de ordenação para diferentes tamanhos de entrada;
- debugar casos limite, como entradas pequenas, duplicatas e valores desordenados;
- melhorar a organização do código e a clareza da documentação.

No contexto do projeto, o uso da IA foi focado em apoio ao raciocínio e refino da solução, especialmente na análise das funções de sorting e na revisão das regras de validação e eficiência operacional.

## Observações

Este projeto é uma implementação de algoritmo de ordenação para pilhas e foi pensado como exercício de lógica, eficiência e gerenciamento de memória em C.

---

Se quiser, posso também criar uma versão mais detalhada do README em inglês, ou adaptar este arquivo com informações específicas da sua implementação e do desafio 42. 
