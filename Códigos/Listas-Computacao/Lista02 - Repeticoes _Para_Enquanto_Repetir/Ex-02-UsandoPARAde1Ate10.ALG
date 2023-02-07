Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
   // Seção de Declarações das variáveis
   n,i,v,n2: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   i<-0

   escreva("Informe o número da tabuada: ")
   leia(n)
   escreva("Deseja começar a multiplicaçao por qual número? : ")
   leia(n2)

   para i de n2 ate 10 passo 1 faça

      v <- n*i
      i <- i+1

      escreval("Tabuada = ", v)

   fimpara

Fimalgoritmo