# include <stdio.h>

int main (void) {

    int monto=0;
    int billetes1=0;
    int billetes5=0;
    int billetes10=0;
    int billetes20=0;
    int billetes50=0;
    int billetes100=0;
    

    printf("inglresar monto: ",&monto);
    scanf("%d",&monto);

    if (monto<20){
        printf ("no valido");
        return 1;
    }
    else if(monto>5000){
        printf("no valido");
        return 2;
    }

    for(billetes100 = 0; monto >= 100 ; billetes100++) {
        monto = monto - 100;
        
    }

    for(billetes50 = 0; monto >= 50 ; billetes50++) {
        monto = monto-50;
    }

    for(billetes20 = 0; monto >= 20 ; billetes20++) {
        monto = monto-20;
    }

    for(billetes10 = 0; monto >= 10 ; billetes10++) {
     monto = monto-10;
    }

    for(billetes5 = 0; monto >= 5; billetes5++) {
        monto = monto-5;
    }

    for(billetes1 = 0; monto >= 1; billetes1++) {
      monto = monto-1;
    }
    printf("Billetes de 1: %d\n", billetes1);
    printf("Billetes de 5: %d\n", billetes5);
    printf("Billetes de 10: %d\n", billetes10);
    printf("Billetes de 20: %d\n", billetes20);
    printf("Billetes de 50: %d\n", billetes50);
    printf("Billetes de 100: %d\n", billetes100);
    return 0;
}
// poner los print