Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/04/2019
Var
// Se??o de Declara??es das vari?veis 
n, mult, i, inicioN: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 

escreva("Informe um n?mero: ")
leia(n)
escreva("Informe um n?mero p/ come?ar a multiplica??o: ")
leia(inicioN)

i <- 0

  para i de 10 at? inicioN passo -1 fa?a
       mult <- n*i
       escreval("Tabuada: ", mult)
       i <- i + 1
  fimpara
  

Fimalgoritmo