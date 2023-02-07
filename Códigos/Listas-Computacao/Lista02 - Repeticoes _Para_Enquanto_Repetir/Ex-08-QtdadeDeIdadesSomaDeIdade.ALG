Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/04/2019
Var
// Seção de Declarações das variáveis 
idade, i, qtdade , MaiorIdade: inteiro
mediaI: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

i <- 0
MaiorIdade <- 0

escreva("Informe a quantidade de pessoas: ")
leia(qtdade)

   para i de 1 até qtdade passo 1 faça
        escreva("Informe a idade: ")
        leia(idade)
        
        i <- i +1
        
        se (idade >= 18) então
           MaiorIdade <- MaiorIdade +1
        fimse
   fimpara
   
escreval("Quantidade de maior de idade = ", MaiorIdade)

mediaI <- (MaiorIdade/idade)

escreval("A média das idades = ", mediaI)

Fimalgoritmo