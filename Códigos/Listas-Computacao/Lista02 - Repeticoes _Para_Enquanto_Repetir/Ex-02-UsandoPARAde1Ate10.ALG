Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
   // Se??o de Declara??es das vari?veis
   n,i,v,n2: inteiro

Inicio
   // Se??o de Comandos, procedimento, fun??es, operadores, etc...

   i<-0

   escreva("Informe o n?mero da tabuada: ")
   leia(n)
   escreva("Deseja come?ar a multiplica?ao por qual n?mero? : ")
   leia(n2)

   para i de n2 ate 10 passo 1 fa?a

      v <- n*i
      i <- i+1

      escreval("Tabuada = ", v)

   fimpara

Fimalgoritmo