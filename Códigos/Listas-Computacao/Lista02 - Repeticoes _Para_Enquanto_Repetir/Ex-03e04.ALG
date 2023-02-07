Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
   // Seção de Declarações das variáveis
   n,i,v,p: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("Informe um número: ")
   leia(n)
   escreval

   para i de 1 até 10 passo 1 faça

      v<-n*i
      i<-i+1

      escreval("Tabuada: ", v)
      escreval

      p<-v%2

      se(p=0) entao
         escreva("Número primo = ", v)
         escreval
      senao

         escreval("Número impar = ", v)
      fimse

   fimpara


Fimalgoritmo