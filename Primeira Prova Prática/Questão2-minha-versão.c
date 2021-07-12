/*
Resposta da letra (a):
    Isso é possível graças ao Código de Caracteres usado nessa implementação, isto é, a linguagem C
possui um conjunto de caracteres específicos que podem ser usados em seus códigos, mas existem códigos que fazem um mapeamento
desses caracteres, associando-os a números inteiros. Alguns desses códigos são ASCII ou EBCDIC. Como uma característica desses
mapeamentos, o alfabeto é representado por números que seguem a ordem ( 57, 58, 59, 60, ...) e as letras maiúsculas vem antes das
minusculas.
    Sobre o funcionamento do laço for, este laço tem 3 instruções principais que são executadas da seguinte maneira:
assim que o fluxo de execução do programa chega nesse laço ele executa a instrução1, geralmente é a definição de alguma
variavel que será usada para controlar as iterações. Depois disso ele avalia a intrução2 como uma condição, se resultar
em verdadeira ele executa o corpo do laço e o fuxo é desviado para a instrução3 que geralmente é usada para incrementar
ou decrementar a variável que estásendo usada no controle do laço. Depois disso o fluxo volta para a instrução2, e repete
o processo de avaliação. Enquanto a instrução2 for verdadeira, ele executa o corpo do laço, executa a instrução3 e avalia
a instrução2 novamente, até que ela seja falsa e ele não execute mais o corpo do laço e passe para a próxima instrução.
    No caso do programa do alfabeto, a variável de controle foi "letra", sua instrução1 foi a definição do caractere 'a'
nela, a condição da instrução2 foi "Enquanto letra for menor ou igual a 'z'" mas na verdade isso significa: "Enquanto o
o número inteiro que representa o caracere guardado em 'letra' for menor ou igual ao número inteiro que representa 'z'"
como o alfabeto aparece no Código de Caracteres representado por números consecutivos, bastou colocar para incrementar a
variável "letra" na instrução3 e pronto. Sempre que terminava uma iteração do laço, o número inteiro que representava o
caractere guardado em "letra" era incrementado e letra passava a guardar o próximo caractere do código, nesse caso, a
próxima letra do alfabeto.
*/

//  Agora vamos à resposta da letra (b):


/*
    Minha ideia foi a seguinte, fui até a tabela ASCII fornecida nos slides passados na aula sobre código de caracteres
e vi que lá os alfabetos maiúsculo e minúsculo tem os números inteiros que os representam diferindo 32 unidades um do outro.
Devo deixar claro que eu não sei qual é o código de caracteres usado aqui, mas por sorte eu fiz alguns testes e vi que
o mesmo que ocorre na tabela ASCII ocorre aqui, os números inteiros que representam os alfabetos também diferem 32 unidades.
Sabendo disso tive a ideia de reutilizar o FOR do código da questão alterando as seguintes coisas:
- letra recebe 'A' maiúsculo na instrução1.
- A condição da instrução2 é que letra seja menor ou igual a 'Z' maiúsculo.
    Dessa forma o for funcionaria exatamente da mesma maneira que estava funcionando antes, só que agora exibindo o alfabeto
maiúsculo. Então no corpo do laço eu usei uma estrutura de desvios múltiplos que vai fazer com que sempre que a variável letra
receber uma vogal maiúscula, o switch case desviará o fluxo de execução para que seja exibida a vogal minúscula, enquanto as
consoantes maiúsculas serão exibidas normalmente.

*/
#include <stdio.h>

int main(void){
    char letra;                                 //variável usada para armazenar os caracteres dos alfabetos e também no controle do laço FOR.

    for(letra = 'A'; letra <= 'Z'; letra++){    //define letra como 'A', e manda executar o corpo do laço e subir uma unidade em "letra", enquanto letra for menor ou igual ao número inteiro que represnta 'Z'
        switch(letra){                          //Switch avalia o valor da variável letra.
        case 'A':                               //Cláusula de desvio:Se o valor corresponder a vogal 'A' maiúscula
            printf("%c", letra + 32);           //Exiba o valor correspondente a vogal 'A' maiúscula somando 32 unidades a ele.
            continue;                           //Depois siga direto para a próxima iteraççao do laço FOR.
        case 'E':                               //Cláusula de desvio:Se o valor corresponder a vogal 'E' maiúscula
            printf("%c", letra + 32);           //Exiba o valor correspondente a vogal 'E' maiúscula somando 32 unidades a ele.
            continue;                           //Depois siga direto para a próxima iteraççao do laço FOR.
        case 'I':                               //Cláusula de desvio:Se o valor corresponder a vogal 'I' maiúscula
            printf("%c", letra + 32);           //Exiba o valor correspondente a vogal 'I' maiúscula somando 32 unidades a ele.
            continue;                           //Depois siga direto para a próxima iteraççao do laço FOR.
        case 'O':                               //Cláusula de desvio:Se o valor corresponder a vogal 'O' maiúscula
            printf("%c", letra + 32);           //Exiba o valor correspondente a vogal 'O' maiúscula somando 32 unidades a ele.
            continue;                           //Depois siga direto para a próxima iteraççao do laço FOR.
        case 'U':                               //Cláusula de desvio:Se o valor corresponder a vogal 'U' maiúscula
            printf("%c", letra + 32);           //Exiba o valor correspondente a vogal 'U' maiúscula somando 32 unidades a ele.
            continue;                           //Depois siga direto para a próxima iteraççao do laço FOR.
        default:                                //Em qualquer outro caso:
            printf("%c", letra);                //Exiba o valor da variavel letra sem acrescentar nada.

        }
    }

    return 0;
}
/*
    Estou ciente de que este código pode apresentar erros ao ser compilado em outras implementações da linguagem
simplesmente pelo fato dele depender diretamente do código de caracteres que é utilizado.
*/
