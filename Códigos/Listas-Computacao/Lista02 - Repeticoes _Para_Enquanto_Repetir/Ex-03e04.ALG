Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
   // Se??o de Declara??es das vari?veis
   n,i,v,p: inteiro

Inicio
   // Se??o de Comandos, procedimento, fun??es, operadores, etc...

   escreva("Informe um n?mero: ")
   leia(n)
   escreval

   para i de 1 at? 10 passo 1 fa?a

      v<-n*i
      i<-i+1

      escreval("Tabuada: ", v)
      escreval

      p<-v%2

      se(p=0) entao
         escreva("N?mero primo = ", v)
         escreval
      senao

         escreval("N?mero impar = ", v)
      fimse

   fimpara


Fimalgoritmo