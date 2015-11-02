# include <stdio.h>  
int main() 
{ 
float N[1000]; 
int cantidad = 0; 
int i = 0; 
float suma = 0; 
printf("Cuantos numeros deseas sumar: "); 
scanf("%d",&cantidad); 
for(i = 0; i < cantidad; i++) 
{ 
printf("Introduce el numero %d\n: ",i+1); 
scanf("%f",&N[i]); 
suma += N[i]; 
} 
printf("El promedio de todos los numeros fue de: %.2f", suma/cantidad); 
return 0; 
} 
