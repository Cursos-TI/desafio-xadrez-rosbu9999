#include <stdio.h>

int main(){

int torre = 0;
int rei = 0;
int peao = 0;
int cavalo = 0;
int bispo = 0;
int rainha = 0;
while (torre < 5)
{
printf("frente\n");

torre++;

}
{

    printf("frente\n");

} 

for (torre = 0; torre < 5; torre++)

{

   printf("trás\n");

} 

for (torre = 0; torre < 5; torre++)

{

    printf("direita\n");

} 

for (torre = 0; torre < 5; torre++)

{

    printf("esquerda\n");

}

while (rei < 2)

{

printf("frente\n");

rei++;
if (rei = 2)
{
    printf("esquerda\n");
}


}

 for (rei = 3; rei < 4; rei++)

{
   printf("frente\n");
   if (rei = 3)
    {
      
        printf("direita\n");
    }  else if (rei = 4)
      {
        printf("direita");
      }

}

for (rei = 4; rei < 6; rei++)

{
    printf("esquerda\n");
    if (rei = 5)
    {
        printf("tras\n");
    }
}

for (rei = 6; rei < 8; rei++)

{
    printf("direita\n");
    if (rei = 7)
    {
        printf("tras\n");
    }
    
}

while (peao < 1)

{

printf("frente\n");

peao++;

}

do
{
    printf("frente\n");

cavalo++;

if (cavalo == 3)
{
    printf("direita\n");
}

} while (cavalo < 3);


do
{
    
    printf("frente\n");
    cavalo++;


if (cavalo == 6)
{
    printf("esquerda\n");
}

} while (cavalo < 6);

while (cavalo < 9){

printf("tras\n");
cavalo++;

if (cavalo == 9)
{
    printf("direita\n");
}
}
  
do
{
    printf("tras\n");

cavalo++;

if (cavalo == 12)
{
    printf("esquerda\n");
}

} while (cavalo < 12);

do
{
    printf("direita\n");

cavalo++;

if (cavalo == 15)
{
    printf("frente\n");
}

} while (cavalo < 15);

do
{
    printf("direita\n");

cavalo++;

if (cavalo == 18)
{
    printf("tras\n");
}

} while (cavalo < 18);

do
{
    printf("esquerda\n");

cavalo++;

if (cavalo == 21)
{
    printf("frente\n");
}

} while (cavalo < 21);


do
{
    printf("esquerda\n");

cavalo++;

if (cavalo == 24)
{
    printf("tras\n");
}

} while (cavalo <24);

while (bispo < 4) {
    printf("frente\n");
    bispo++;
    if (bispo == 1) {
        printf("direita\n");
    }else if (cavalo = 3)
    {
        printf("direita\n");
    }
    
}

do {
    printf("frente\n");
    bispo++;
    if (bispo == 5) {
        printf("esquerda\n");
    }else if (cavalo = 7)
        {
            printf("esquerda\n");
        }
        
    }
 while (bispo < 9);

while (bispo < 12) {
    printf("trás\n");
    bispo++;
    if (bispo == 10) {
        printf("direita\n");
    }
    else if (bispo == 11)
    {
        printf("direita\n");
    }else if (cavalo == 12)
    {
        printf("direita");
    }
    
    
}



while (rainha < 2) {
    printf("frente\n");
    rainha++;
    if (rainha == 1) {
        printf("direita\n");
    }
}

do {
    printf("esquerda\n");
    rainha++;
    if (rainha == 3) {
        printf("trás\n");
    }
} while (rainha < 4);

for (rainha = 4; rainha < 5; rainha++) {
    printf("tras\n");
    if (rainha == 4) {
        printf("direita\n");
    }
    return 0;
}



