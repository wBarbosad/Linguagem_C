Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/04/2019
Var
// Se??o de Declara??es das vari?veis 
n, s , np, i: inteiro
rpa: real


Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
 i <- 0
 s<- 0
 escreva("Informe um valor: ")
 leia(n)
 
   para i de 1 at? n passo 1 fa?a
       np <- n+i 
       i<- i +1
       escreval("Valores: ", np)
   fimpara
   s<-s+np
   rpa <- np/s
   escreval("Raz?o da PA: ", rpa)
    
Fimalgoritmo