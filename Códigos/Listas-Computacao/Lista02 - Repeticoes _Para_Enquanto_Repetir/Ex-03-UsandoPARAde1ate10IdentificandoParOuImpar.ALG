Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/04/2019
Var
// Se??o de Declara??es das vari?veis 

n, mult, i, par: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 

escreva("Informe um n?mero: ")
leia(n)


para i de 1 at? 10 passo 1 fa?a
     mult <- n*i
     escreval("Multiplica??o: ", mult)
     i<- i+1

      par <- mult%2
  se (par=0) ent?o
     escreval("N?mero Par!")
     escreval
     sen?o
      escreval("N?mero ?mpar!")
      escreval
     fimse
fimpara



Fimalgoritmo