Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o]
// Professor   : Antonio Carlos Nicolodi 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
// Se??o de Declara??es das vari?veis 
n1, n2, n3, maiorn: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 

escreva("Informe os numeros: ")
leia(n1,n2,n3)

 se(n1>n2) e (n1>n3) entao
   escreva("Maior numero = ", n1)
     maiorn <- n1
 fimse
      se (n2>n1) e (n2>n3) entao
         escreva("Maior numero = ", n2)
          maiorn <- n2
      fimse
           se (n3>n1) e (n3>n2) entao
              escreva("Maior numero = ", n3)
              maiorn <- n3
           fimse
                se(n1=n2) e (n2=n3) entao
                 escreva("Todos os n?meros sao iguais")
                fimse
           

Fimalgoritmo