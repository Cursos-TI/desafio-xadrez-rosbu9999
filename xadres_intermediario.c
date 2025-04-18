#include <stdio.h>

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


while (torre < 5)
{
printf("frente\n");

torre++;
}

break; 

 case 2: 
 
 for (torre = 0; torre < 5; torre++)

{

   printf("trás\n");

}break; 

case 3: 

for (torre = 0; torre < 5; torre++)

{

    printf("direita\n");

} 
break;

case 4:
for (torre = 0; torre < 5; torre++)

{

    printf("esquerda\n");

}
break;}
break;


case 'K':
case 'k':

printf("1.frente e esquerda\n");
printf("2.frente e direita\n");
printf("3.tras e esquerda\n");
printf("4.tras e direita\n");
printf("para qual lado vc quer mover a torre?");
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

 printf("1.frente , direita, frente e direita\n");
 printf("2.frente e direita\n");
 printf("3.tras e esquerda\n");
 printf("4.tras e direita\n");
 printf("para qual lado vc quer mover a torre?");
 scanf("%d", &mover);
 switch (mover)
 {
 
case 1:
while (bispo < 2) {
    printf("frente\n");
    bispo++;
    if (bispo == 1) {
        printf("direita\n");
    }else if (bispo == 2)
    {
        printf("direita\n");
    }
    
}break;

case 2:
while (bispo < 2){
    printf("frente\n");
    bispo++;
    if (bispo == 1) {
        printf("esquerda\n");
    }else if (bispo == 2) {
            printf("esquerda\n");
        }
} 
 break;
case 3:

while (bispo < 2) {
    printf("trás\n");
    bispo++;
    if (bispo == 1) {
        printf("direita\n");
    }
    else if (bispo == 2)
    {
        printf("direita\n");
    }    
} break;

case 4:

while (bispo < 2) {
    printf("trás\n");
    bispo++;
    if (bispo == 1) {
        printf("esquerda\n");
    }
    else if (bispo == 2)
    {
        printf("esquerda\n");
    }
}break;}
break;

case 'R':
case 'r':

printf("1.diagonal direito para cima\n");
printf("2.diagonal esquerdo para cima\n");
printf("3.diagonal esquerdo para baixo\n");
printf("4.diagonal direito para baixo\n");
printf("para qual lado vc quer mover a rainha?");
scanf("%d", &mover);

switch (mover){


case 1://mais um teste que deu certo

   
    for ( int i = 0; i < 5; i++)
    {
        printf("direita\n");
     printf("frente\n");
    }
break;

case 2:
    for ( int i = 0; i < 5; i++)
     {
            printf("esquerda\n");
         printf("frente\n");
     }
break;

case 3:
    for ( int i = 0; i < 5; i++)
    {
        printf("esquerda\n");
     printf("tras\n");
    }
break;

case 4:

    for ( int i = 0; i < 5; i++)
    {
        printf("direita\n");
     printf("tras\n");
    }

break;}

break;}
return 0;
}