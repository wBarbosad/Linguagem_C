Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/04/2019
Var
// Se??o de Declara??es das vari?veis 

N: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 

escreva("Informe um valor: ")
leia(n)

  se(n>=0) e (n<3) entao
    escreva("Baixo Risco entre 0 a 3!")
    escreval
  senao
      se(n>=3) e (n<=6) entao
          escreva("M?dio Risco entre 3 a 6!")
          escreval
      senao
           escreva("Grave Risco!!")
      fimse
  fimse
  
Fimalgoritmo