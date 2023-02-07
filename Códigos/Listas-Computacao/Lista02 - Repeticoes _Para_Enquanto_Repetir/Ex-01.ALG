Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
   // Seção de Declarações das variáveis

   n,i,valor: inteiro


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("Informe um número: ")
   leia(n)

   para i de 1 até 10 passo 1 faça
      valor <- n*i
      i<- i+1
      
      escreval("Tabuada = " , valor)
      
   fimpara

Fimalgoritmo