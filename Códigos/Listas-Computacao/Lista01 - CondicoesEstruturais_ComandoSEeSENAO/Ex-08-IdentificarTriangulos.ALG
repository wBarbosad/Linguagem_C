Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/04/2019
Var
   // Se??o de Declara??es das vari?veis
   n1, n2, n3: inteiro


Inicio
   // Se??o de Comandos, procedimento, fun??es, operadores, etc...

escreva("Informe os valores do lado: ")
leia(n1,n2,n3)

  se(n1=n2) e (n2=n3) entao
    escreva("Triangulo Equil?tero")
  senao
     se(n1<>n2) e (n2<>n3) entao
       escreva("Triangulo escaleno")
     senao
          escreva("Nao ? um triangulo")
     fimse
  fimse



Fimalgoritmo