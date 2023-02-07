Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
// Seção de Declarações das variáveis 

valor, temperatura: inteiro
valorT: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreval("*TABELA DE CONVERÇOES*")
escreva("Informe o valor que deseja fazer a converçao: ")
leia(valor)
escreval("Selecione a unidade de medida")
escreva("1 - Kelvin / 2 - Celsius / 3 - Sair: ")
leia(temperatura)

escolha(temperatura)

caso '1': escreva("Escolha K > C")
          valorT <- valor - 273.15
          
caso '2': escreva("Escolha C > K")
          valorT <- valor + 273.15

caso '3': escreva("Sair do programa!")

escreva("Converçao = ", valorT)


Fimalgoritmo