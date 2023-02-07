Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/04/2019
Var
// Seção de Declarações das variáveis 

n, mult, i, par: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Informe um número: ")
leia(n)


para i de 1 até 10 passo 1 faça
     mult <- n*i
     escreval("Multiplicação: ", mult)
     i<- i+1

      par <- mult%2
  se (par=0) então
     escreval("Número Par!")
     escreval
     senão
      escreval("Número Ímpar!")
      escreval
     fimse
fimpara



Fimalgoritmo