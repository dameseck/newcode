#include <stdio.h>
#include <stdlib.h>

int *tableau(int n)
{
    int i,*tab;
    tab=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("tab[%d]=",i+1);
    scanf("%d",&tab[i]);}
    return tab;
}
void affichage(int n,int tab[])
{int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",tab[i]);
    }
}
int *somme(int n,int tab[],int tab1[]){
  int som[n];
    int i;
    for(i=0;i<n;i++)
    {
        som[i]=tab[i]+tab1[i];
    }return som;
}
int *produit(int n,int tab[],int tab1[]){

int prod[n], i;
   for(i=0;i<n;i++)
   {
       prod[i]=tab[i]*tab1[i];
   }return prod;
}
int main()
{int n,*tabl,*tabl1,*tabl2,*tabl3;
printf("la taille du tableau");
scanf("%d",&n);
printf("saisir le tableau 1\n");
tabl=tableau(n);
printf("saisir le tableau 2\n");
tabl1=tableau(n);
printf("le tableau1\n");
affichage(n,tabl);
printf("le tableau2\n");
affichage(n,tabl1);
tabl2=produit(n,tabl,tabl1);
printf("le produit est \n");
affichage(n,tabl2);
tabl3=somme(n,tabl,tabl1);
printf("la somme est \n");
affichage(n,tabl3);



    return 0;
}
