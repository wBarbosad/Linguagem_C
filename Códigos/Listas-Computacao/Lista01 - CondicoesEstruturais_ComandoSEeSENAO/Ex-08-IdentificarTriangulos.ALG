Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/04/2019
Var
   // Seção de Declarações das variáveis
   n1, n2, n3: inteiro


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

escreva("Informe os valores do lado: ")
leia(n1,n2,n3)

  se(n1=n2) e (n2=n3) entao
    escreva("Triangulo Equilátero")
  senao
     se(n1<>n2) e (n2<>n3) entao
       escreva("Triangulo escaleno")
     senao
          escreva("Nao é um triangulo")
     fimse
  fimse



Fimalgoritmo