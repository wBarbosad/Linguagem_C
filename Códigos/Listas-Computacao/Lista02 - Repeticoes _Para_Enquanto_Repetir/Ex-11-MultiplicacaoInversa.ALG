Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/04/2019
Var
// Seção de Declarações das variáveis 
n, mult, i, inicioN: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Informe um número: ")
leia(n)
escreva("Informe um número p/ começar a multiplicação: ")
leia(inicioN)

i <- 0

  para i de 10 até inicioN passo -1 faça
       mult <- n*i
       escreval("Tabuada: ", mult)
       i <- i + 1
  fimpara
  

Fimalgoritmo