Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o]
// Professor   : Antonio Carlos Nicolodi 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
// Se??o de Declara??es das vari?veis 

valor, temperatura: inteiro
valorT: real

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 

escreval("*TABELA DE CONVER?OES*")
escreva("Informe o valor que deseja fazer a conver?ao: ")
leia(valor)
escreval("Selecione a unidade de medida")
escreva("1 - Kelvin / 2 - Celsius / 3 - Sair: ")
leia(temperatura)

escolha(temperatura)

caso '1': escreva("Escolha K > C")
          valorT <- valor - 273.15
          
caso '2': escreva("Escolha C > K")
          valorT <- valor + 273.15

caso '3': escreva("Sair do programa!")

escreva("Conver?ao = ", valorT)


Fimalgoritmo