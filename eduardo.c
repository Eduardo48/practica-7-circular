#include <stdio.h>

int main(){
	int estado=4,year1=2,mes=2;
	float a[year1][estado][mes];
	int i,d,j,year=2019,auxiliar,auxiliar1;
    float c=0,p,z=0;
    char opcion;
	for(i=0;i<year1;i++){
        printf(" %d\n",year);
		for(d=0;d<estado;d++){
            printf("Ingrese los datos del estado %d\n",d+1);
            for(j=0;j<mes;j++){
        printf("Ingrese los datos del mes %d\n",j+1);
		scanf("%f",&a[i][d][j]);
            }

	}
    year=year+1;
	}
     for(i=0;i<year1;i++){
          printf("year %d\n",year );
		for(d=0;d<estado;d++){
            for(j=0;j<mes;j++){
                c=c+a[i][d][j];
                if(a[i][d][j]>z){
                    z=a[i][d][j];
                    auxiliar=j+1;
                    auxiliar1=d+1;
                }
            }
             p=c/mes;
            printf("el promedio del estado %d \t %f\n",d+1,p);
            c=0;
      }
      printf("la temperatura maxima registrada fue %f  centigrados  en el mes %d  y en el estado %d\n",z,auxiliar,auxiliar1);
      year=year+1;
      z=0;
	  }
    printf("elige una opcion\n");
    printf("S para terminar de ejecuatar el programa\n");
    printf("A para volver a observar los datos  \n");
    scanf("%s",&opcion);
    if(opcion=='A'|| opcion=='a'){
           for(i=0;i<year1;i++){
          printf("year %d\n",year );
		for(d=0;d<estado;d++){
            for(j=0;j<mes;j++){
                c=c+a[i][d][j];
                if(a[i][d][j]>z){
                    z=a[i][d][j];
                    auxiliar=j+1;
                    auxiliar1=d+1;
                }

            }
             p=c/mes;
            printf("el promedio del estado %d \t %f\n",d+1,p);
            c=0;
      }
      printf("la temperatura maxima registrada fue %f  centigrados  en el mes %d  y en el estado %d\n",z,auxiliar,auxiliar1);
      year=year+1;
      z=0;
	  }
    }


	return 0;
}
