/*
Resposta da letra (a):
    Isso � poss�vel gra�as ao C�digo de Caracteres usado nessa implementa��o, isto �, a linguagem C
possui um conjunto de caracteres espec�ficos que podem ser usados em seus c�digos, mas existem c�digos que fazem um mapeamento
desses caracteres, associando-os a n�meros inteiros. Alguns desses c�digos s�o ASCII ou EBCDIC. Como uma caracter�stica desses
mapeamentos, o alfabeto � representado por n�meros que seguem a ordem ( 57, 58, 59, 60, ...) e as letras mai�sculas vem antes das
minusculas.
    Sobre o funcionamento do la�o for, este la�o tem 3 instru��es principais que s�o executadas da seguinte maneira:
assim que o fluxo de execu��o do programa chega nesse la�o ele executa a instru��o1, geralmente � a defini��o de alguma
variavel que ser� usada para controlar as itera��es. Depois disso ele avalia a intru��o2 como uma condi��o, se resultar
em verdadeira ele executa o corpo do la�o e o fuxo � desviado para a instru��o3 que geralmente � usada para incrementar
ou decrementar a vari�vel que est�sendo usada no controle do la�o. Depois disso o fluxo volta para a instru��o2, e repete
o processo de avalia��o. Enquanto a instru��o2 for verdadeira, ele executa o corpo do la�o, executa a instru��o3 e avalia
a instru��o2 novamente, at� que ela seja falsa e ele n�o execute mais o corpo do la�o e passe para a pr�xima instru��o.
    No caso do programa do alfabeto, a vari�vel de controle foi "letra", sua instru��o1 foi a defini��o do caractere 'a'
nela, a condi��o da instru��o2 foi "Enquanto letra for menor ou igual a 'z'" mas na verdade isso significa: "Enquanto o
o n�mero inteiro que representa o caracere guardado em 'letra' for menor ou igual ao n�mero inteiro que representa 'z'"
como o alfabeto aparece no C�digo de Caracteres representado por n�meros consecutivos, bastou colocar para incrementar a
vari�vel "letra" na instru��o3 e pronto. Sempre que terminava uma itera��o do la�o, o n�mero inteiro que representava o
caractere guardado em "letra" era incrementado e letra passava a guardar o pr�ximo caractere do c�digo, nesse caso, a
pr�xima letra do alfabeto.
*/

//  Agora vamos � resposta da letra (b):


/*
    Minha ideia foi a seguinte, fui at� a tabela ASCII fornecida nos slides passados na aula sobre c�digo de caracteres
e vi que l� os alfabetos mai�sculo e min�sculo tem os n�meros inteiros que os representam diferindo 32 unidades um do outro.
Devo deixar claro que eu n�o sei qual � o c�digo de caracteres usado aqui, mas por sorte eu fiz alguns testes e vi que
o mesmo que ocorre na tabela ASCII ocorre aqui, os n�meros inteiros que representam os alfabetos tamb�m diferem 32 unidades.
Sabendo disso tive a ideia de reutilizar o FOR do c�digo da quest�o alterando as seguintes coisas:
- letra recebe 'A' mai�sculo na instru��o1.
- A condi��o da instru��o2 � que letra seja menor ou igual a 'Z' mai�sculo.
    Dessa forma o for funcionaria exatamente da mesma maneira que estava funcionando antes, s� que agora exibindo o alfabeto
mai�sculo. Ent�o no corpo do la�o eu usei uma estrutura de desvios m�ltiplos que vai fazer com que sempre que a vari�vel letra
receber uma vogal mai�scula, o switch case desviar� o fluxo de execu��o para que seja exibida a vogal min�scula, enquanto as
consoantes mai�sculas ser�o exibidas normalmente.

*/
#include <stdio.h>

int main(void){
    char letra;                                 //vari�vel usada para armazenar os caracteres dos alfabetos e tamb�m no controle do la�o FOR.

    for(letra = 'A'; letra <= 'Z'; letra++){    //define letra como 'A', e manda executar o corpo do la�o e subir uma unidade em "letra", enquanto letra for menor ou igual ao n�mero inteiro que represnta 'Z'
        switch(letra){                          //Switch avalia o valor da vari�vel letra.
        case 'A':                               //Cl�usula de desvio:Se o valor corresponder a vogal 'A' mai�scula
            printf("%c", letra + 32);           //Exiba o valor correspondente a vogal 'A' mai�scula somando 32 unidades a ele.
            continue;                           //Depois siga direto para a pr�xima itera��ao do la�o FOR.
        case 'E':                               //Cl�usula de desvio:Se o valor corresponder a vogal 'E' mai�scula
            printf("%c", letra + 32);           //Exiba o valor correspondente a vogal 'E' mai�scula somando 32 unidades a ele.
            continue;                           //Depois siga direto para a pr�xima itera��ao do la�o FOR.
        case 'I':                               //Cl�usula de desvio:Se o valor corresponder a vogal 'I' mai�scula
            printf("%c", letra + 32);           //Exiba o valor correspondente a vogal 'I' mai�scula somando 32 unidades a ele.
            continue;                           //Depois siga direto para a pr�xima itera��ao do la�o FOR.
        case 'O':                               //Cl�usula de desvio:Se o valor corresponder a vogal 'O' mai�scula
            printf("%c", letra + 32);           //Exiba o valor correspondente a vogal 'O' mai�scula somando 32 unidades a ele.
            continue;                           //Depois siga direto para a pr�xima itera��ao do la�o FOR.
        case 'U':                               //Cl�usula de desvio:Se o valor corresponder a vogal 'U' mai�scula
            printf("%c", letra + 32);           //Exiba o valor correspondente a vogal 'U' mai�scula somando 32 unidades a ele.
            continue;                           //Depois siga direto para a pr�xima itera��ao do la�o FOR.
        default:                                //Em qualquer outro caso:
            printf("%c", letra);                //Exiba o valor da variavel letra sem acrescentar nada.

        }
    }

    return 0;
}
/*
    Estou ciente de que este c�digo pode apresentar erros ao ser compilado em outras implementa��es da linguagem
simplesmente pelo fato dele depender diretamente do c�digo de caracteres que � utilizado.
*/
