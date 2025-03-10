# Exemplos em C

## O Que São Ponteiros de Funções?

Assim como um ponteiro armazena o endereço de uma variável, um ponteiro de função armazena o endereço de uma função na memória. Isso nos permite passar funções como argumentos para outras funções, armazená-las em variáveis e até mesmo criar estruturas de dados que contêm funções.

## Por Que Usar Ponteiros de Funções?

* Flexibilidade: Permitem escolher qual função executar em tempo de execução.
* Modularidade: Facilitam a criação de código mais organizado e reutilizável.
* Callbacks: Essenciais para implementar callbacks, onde uma função notifica outra sobre a ocorrência de um evento.
* Tabelas de Funções: Úteis para criar tabelas de funções, que permitem associar funções a eventos ou comandos.

## Exemplo Didático 1: Funções de Comparação Genéricas

Vamos criar uma função genérica para comparar dois números, que pode ser usada tanto para comparar inteiros quanto floats.

## Exemplo Didático 2: Callbacks Simples

Vamos simular um evento simples, onde uma função notifica outra sobre a ocorrência desse evento.

## Exemplo Didático 3 - Calculadora Simples

Objetivo: Demonstrar como ponteiros de funções permitem escolher dinamicamente qual operação realizar.

## Exercícios Propostos
1. Conversor de Temperaturas
Crie um programa que usa ponteiros de funções para converter temperaturas entre Celsius, Fahrenheit e Kelvin.
O usuário escolhe o tipo de conversão e o programa chama a função apropriada.
2. Array de Funções
Declare um array de ponteiros de funções para armazenar várias operações matemáticas (soma, subtração, multiplicação, divisão).
Permita que o usuário escolha a operação a ser executada a partir do array.
3. Funções de Ordenação
Implemente uma função genérica de ordenação que aceita um ponteiro para uma função de comparação, permitindo ordenar um array de números de forma crescente ou decrescente.

## Ponteiros e struct

Aqui está um exemplo em __C__ que ilustra como você pode usar um registro (_struct_) para representar uma data e como adicionar ponteiros para funções que operam com datas. Este exemplo pode ser usado para introduzir as restrições da programação estruturada e as vantagens de agrupar dados e funcionalidades em uma mesma estrutura.

## Estrutura Data:

A estrutura Data contém três campos inteiros para representar o dia, mês e ano.

Além disso, a estrutura contém dois ponteiros para funções: _imprimir_ e _validar_.

## Funções imprimirData e validarData:

_imprimirData_: Imprime a data no formato dd/mm/aaaa.

_validarData_: Verifica se a data é válida, considerando o número de dias em cada mês e anos bissextos.

## Função inicializarData:

Inicializa os campos da estrutura Data e associa os ponteiros de função às funções imprimirData e validarData.

## Função main:

Cria duas instâncias de Data, uma com uma data válida e outra com uma data inválida.

Usa os ponteiros de função para imprimir e validar as datas.

## Restrições da Programação Estruturada:

* __Falta de Encapsulamento__: Em programação estruturada tradicional, os dados e as funções que operam sobre eles são separados, o que pode levar a um código menos organizado e mais propenso a erros.

* __Dificuldade de Manutenção__: Sem o agrupamento de dados e funcionalidades, a manutenção do código pode se tornar mais complexa, especialmente em programas grandes.

## Vantagens deste Paradigma:

* __Agrupamento de Dados e Funcionalidades__: A estrutura Data agrupa não apenas os dados (dia, mês, ano), mas também as funcionalidades que operam sobre esses dados (imprimir e validar).

Este exemplo ilustra como a programação orientada a estruturas (um precursor da programação orientada a objetos) pode ser usada para superar algumas das limitações da programação estruturada tradicional.
