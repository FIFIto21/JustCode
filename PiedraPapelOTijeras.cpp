#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){

//menu
printf("___________________________________ \n");
printf("Bienvenido a piedra, papel o tijeras \n");
printf("\n");
printf("\n");
printf("Iniciar(1) \n");
printf("\n");
printf("Salir(0) \n");
printf("\n");
printf("\n");
printf("Respuesta --> ");
int a;
 scanf("%d",&a);
printf("\n");

 //salir
 if(a == 0)printf("Cierra la puerta al salir \n");

 //inicio
 if(a == 1){
        int z = 1, p = 0;
        while(z == 1){
        printf("___________________________________ \n");
        printf("Escoge:");
        printf("                  Puntaje: %d \n",p);
        printf("\n");
        printf("Piedra(1) \n");
        printf("\n");
        printf("Papel(2) \n");
        printf("\n");
        printf("Tijera(3) \n");
        printf("\n");
        printf("\n");
        printf("Respuesta --> ");
         scanf("%d",&a);
        printf("\n");

        int v;
        srand(time(0));
        v = 1+rand()%3;

         //piedra
         if(a == 1 && v == 1){
            printf("___________________________________  \n");
            printf("              Piedra \n");
            printf("\n");
            printf("                VS \n");
            printf("\n");
            printf("               ");
            for(int x = 0; x <= 3; x++){
            Sleep(500);
            printf(".");}
            printf("\n");
            printf("\n");
            printf("              Piedra \n");
            printf("\n");
            printf("Empaate, Quieres volver a intertarlo? \n");
            printf("Si(1) No(0)");
            printf("               Puntaje: %d \n",p);
            printf("\n");
            printf("\n");
            printf("Respuesta --> ");
             scanf("%d",&a);

             if(a == 0)break;

             if(a == 1)continue;
}
              if(a == 1 && v == 2){
            p --;
            printf("___________________________________  \n");
            printf("              Piedra \n");
            printf("\n");
            printf("                VS \n");
            printf("\n");
            printf("               ");
            for(int x = 0; x <= 3; x++){
            Sleep(500);
            printf(".");}
            printf("\n");
            printf("\n");
            printf("              Papel \n");
            printf("\n");
            printf("Perdiste, Quieres volver a intertarlo? \n");
            printf("Si(1) No(0)");
            printf("               Puntaje: %d \n",p);
            printf("\n");
            printf("\n");
            printf("Respuesta --> ");
             scanf("%d",&a);

             if(a == 0)break;

             if(a == 1)continue;
}
              if(a == 1 && v == 3){
            p ++;
            printf("___________________________________  \n");
            printf("              Piedra \n");
            printf("\n");
            printf("                VS \n");
            printf("\n");
            printf("               ");
            for(int x = 0; x <= 3; x++){
            Sleep(500);
            printf(".");}
            printf("\n");
            printf("\n");
            printf("              Tijera \n");
            printf("\n");
            printf("Ganaste, Quieres volver a intertarlo? \n");
            printf("Si(1) No(0)");
            printf("               Puntaje: %d \n",p);
            printf("\n");
            printf("\n");
            printf("Respuesta -->");
             scanf("%d",&a);

             if(a == 0)break;

             if(a == 1)continue;
}

            //papel
            if(a == 2 && v == 1){
            p ++;
            printf("___________________________________  \n");
            printf("              Papel \n");
            printf("\n");
            printf("                VS \n");
            printf("\n");
            printf("               ");
            for(int x = 0; x <= 3; x++){
            Sleep(500);
            printf(".");}
            printf("\n");
            printf("\n");
            printf("              Piedra \n");
            printf("\n");
            printf("Ganaste, Quieres volver a intertarlo? \n");
            printf("Si(1) No(0)");
            printf("               Puntaje: %d \n",p);
            printf("\n");
            printf("\n");
            printf("Respuesta --> ");
             scanf("%d",&a);

             if(a == 0)break;

             if(a == 1)continue;
}
             if(a == 2 && v == 2){
            printf("___________________________________  \n");
            printf("              Papel \n");
            printf("\n");
            printf("                VS \n");
            printf("\n");
            printf("               ");
            for(int x = 0; x <= 3; x++){
            Sleep(500);
            printf(".");}
            printf("\n");
            printf("\n");
            printf("              Papel \n");
            printf("\n");
            printf("Empaate, Quieres volver a intertarlo? \n");
            printf("Si(1) No(0)");
            printf("               Puntaje: %d \n",p);
            printf("\n");
            printf("\n");
            printf("Respuesta --> ");
             scanf("%d",&a);

             if(a == 0)break;

             if(a == 1)continue;
}
             if(a == 2 && v == 3){
            p --;
            printf("___________________________________  \n");
            printf("              Papel \n");
            printf("\n");
            printf("                VS \n");
            printf("\n");
            printf("               ");
            for(int x = 0; x <= 3; x++){
            Sleep(500);
            printf(".");}
            printf("\n");
            printf("\n");
            printf("              Tijera \n");
            printf("\n");
            printf("Perdiste, Quieres volver a intertarlo? \n");
            printf("Si(1) No(0)");
            printf("               Puntaje: %d \n",p);
            printf("\n");
            printf("\n");
            printf("Respuesta --> ");
             scanf("%d",&a);

             if(a == 0)break;

             if(a == 1)continue;
}

            //tijera
            if(a == 3 && v == 1){
            p --;
            printf("___________________________________  \n");
            printf("              Tijera \n");
            printf("\n");
            printf("                VS \n");
            printf("\n");
            printf("               ");
            for(int x = 0; x <= 3; x++){
            Sleep(500);
            printf(".");}
            printf("\n");
            printf("\n");
            printf("              Piedra \n");
            printf("\n");
            printf("Perdiste, Quieres volver a intertarlo? \n");
            printf("Si(1) No(0)");
            printf("               Puntaje: %d \n",p);
            printf("\n");
            printf("\n");
            printf("Respuesta --> ");
             scanf("%d",&a);

             if(a == 0)break;

             if(a == 1)continue;
}
             if(a == 3 && v == 2){
            p ++;
            printf("___________________________________  \n");
            printf("              Tijera \n");
            printf("\n");
            printf("                VS \n");
            printf("\n");
            printf("               ");
            for(int x = 0; x <= 3; x++){
            Sleep(500);
            printf(".");}
            printf("\n");
            printf("\n");
            printf("              Papel \n");
            printf("\n");
            printf("Ganaste, Quieres volver a intertarlo? \n");
            printf("Si(1) No(0)");
            printf("               Puntaje: %d \n",p);
            printf("\n");
            printf("\n");
            printf("Respuesta --> ");
             scanf("%d",&a);

             if(a == 0)break;

             if(a == 1)continue;
}
             if(a == 3 && v == 3){
            printf("___________________________________  \n");
            printf("              Tijera \n");
            printf("\n");
            printf("                VS \n");
            printf("\n");
            printf("               ");
            for(int x = 0; x <= 3; x++){
            Sleep(500);
            printf(".");}
            printf("\n");
            printf("\n");
            printf("              Tijera \n");
            printf("\n");
            printf("Empate, Quieres volver a intertarlo? \n");
            printf("Si(1) No(0)");
            printf("               Puntaje: %d \n",p);
            printf("\n");
            printf("\n");
            printf("Respuesta --> ");
             scanf("%d",&a);

             if(a == 0)break;

             if(a == 1)continue;
}

}
}
return 0;
}
