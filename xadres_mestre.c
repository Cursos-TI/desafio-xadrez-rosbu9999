#include <stdio.h>

void movertorre(int casas, char direcao[20]){

if (casas > 0)
{
   printf("%s\n", direcao);
movertorre(casas - 1, direcao);
}


}

void moverrainha(int casas, char direcao[20]){

    if (casas > 0)
    {
       printf("%s\n", direcao);
    moverrainha(casas - 1, direcao);
    }
    
}
void moverbispo(int casas, char direcaovertical[20], char direcaohorizontal[20]){
    if (casas > 0){
        for (int i = 0; i < 1; i++) {  // Movimento vertical
            printf("%s\n", direcaovertical);
        }
            for (int j = 0; j < 1; j++) {  // Movimento horizontal
                printf("%s\n", direcaohorizontal);
            }   
        
        moverbispo(casas - 1, direcaovertical, direcaohorizontal);  // Chamada
    }
}


int main(){

int torre = 0;
int rei = 1;
int peao = 0;
int cavalo = 0;
int bispo = 0;
int rainha = 0;
char peca;
int mover;

printf("P.Peão\n");
printf("T.Torre\n");
printf("C.Cavalo\n");
printf("B.Bispo\n");
printf("R.Rainha\n");
printf("K.Rei\n");

printf("qual peça vc vai mover?");
scanf(" %c", &peca);

switch (peca) {
case'T':
case 't':

printf("1.frente\n");
printf("2.tras\n");
printf("3.esquerda\n");
printf("4.direita\n");

printf("para qual lado vc quer mover a torre?");
scanf("%d", &mover);

switch (mover)
{
case 1:

movertorre(5,"frente");

break; 

 case 2: 
 
 movertorre(5, "tras");

break; 

case 3: 

movertorre(5, "esquerda");

break;

case 4:

movertorre(5, "direita");

break;} 
break;



case 'K':
case 'k':

printf("1.frente e esquerda\n");
printf("2.frente e direita\n");
printf("3.tras e esquerda\n");
printf("4.tras e direita\n");
printf("para qual lado vc quer mover a rei?");
scanf("%d", &mover);

switch (mover){

case 1:
     
while (rei < 2) {

    for (int i = 0; i < 1; i++)
{
    printf("frente\n");
}

    printf("esquerda\n");
    rei++;
}

break;

case 2:

 while (rei < 2)
 
{
   
   for (int i = 0; i < 1; i++)
    {
        printf("frente\n");
    }
    printf("direita\n");
 rei++;

} break;

case 3:

for (rei = 0; rei < 2; rei++)

{
    printf("tras\n");
    if (rei == 2)
    {
        printf("esquerda\n");
    }
} break;

case 4:
while (rei < 2)//so queria testar uma coisa
{
   

    if (rei == 2)
    {
        printf("tras\n");
    } printf("direita\n");
    rei++;
} 
break;}
break;


case 'P' :
case 'p' :

printf("1.frente\n");
printf("para qual lado vc quer mover o peão?\n");
scanf("%d", &mover);

switch (mover)
{
    case 1:
    
    while (peao < 1)
{

printf("frente\n");

peao++;
}
break;}
break;

case 'C':
case 'c':

printf("1.cima, cima e esquerda\n");
printf("2.cima, cima e direita\n");
printf("3.tras, tras e direita\n");
printf("4.tras, tras e esquerda\n");
printf("pra onde vc quer mover o cavalo? ");
scanf("%d", &mover);

switch (mover)
{
case 1:

do{
    
    for ( int i = 0; i < 2; i++)
    {
        printf("cima\n");
    }
    printf("esquerda\n");
    
} while (cavalo--);

break;

case 2:
do
{
    
    for ( int i = 0; i < 2; i++)
    {
        printf("cima\n");
    }
    printf("direita\n");
    
} while (cavalo--);
break;

case 3:
 do
 {
    for ( int i = 0; i < 2; i++)
    {
        printf("tras\n");
    }
    printf("direita\n");

}
 while(cavalo--);
break;
case 4:

 do
 {
    for ( int i = 0; i < 2; i++)
    {
        printf("tras\n");
    }
    printf("esquerda\n");

} while(cavalo--);
 break;}  
 break;

 case 'b':
case 'B':

    printf("1. Diagonal esquerda para cima\n");
    printf("2. Diagonal direita para cima\n");
    printf("3. Diagonal esquerda para baixo\n");
    printf("4. Diagonal direita para baixo\n");
    printf("Para qual lado você quer mover o bispo? ");
    scanf("%d", &mover);

    switch (mover)
    {
    case 1:
        moverbispo(8, "cima", "esquerda");
        break;

    case 2:
        moverbispo(8, "cima", "direita");
        break;

    case 3:
        moverbispo(8, "baixo", "esquerda");
        break;

    case 4:
        moverbispo(8, "baixo", "direita");
        break;
    
    break;case 'b':
case 'B':

    printf("1. Diagonal esquerda para cima\n");
    printf("2. Diagonal direita para cima\n");
    printf("3. Diagonal esquerda para baixo\n");
    printf("4. Diagonal direita para baixo\n");
    printf("Para qual lado você quer mover o bispo? ");
    scanf("%d", &mover);

    switch (mover)
    {
    case 1:
        moverbispo(8, "cima", "esquerda");
        break;

    case 2:
        moverbispo(8, "cima", "direita");
        break;

    case 3:
        moverbispo(8, "baixo", "esquerda");
        break;

    case 4:
        moverbispo(8, "baixo", "direita");
        break;
    }
    break;}break;


case 'R':
case 'r':

printf("1.diagonal direito para cima\n");
printf("2.diagonal esquerdo para cima\n");
printf("3.diagonal esquerdo para baixo\n");
printf("4.diagonal direito para baixo\n");
printf("5.direita\n");
printf("6.esquerda\n");
printf("para qual lado vc quer mover a rainha?");
scanf("%d", &mover);

switch (mover){


case 1:

moverrainha(8,"cima\ndireita");

break;

case 2:
    
moverrainha(8,"cima\nesquerda\n");

break;

case 3:
    
moverrainha(8,"baixo\nesquerda");

break;

case 4:

moverrainha(8,"baixo\ndireita");

break;

case 5:

moverrainha(8,"direita");

break;

case 6: 

moverrainha(8,"esquerda");

break;}break;

break;}
return 0;
}






