int inicio() {
  // Verifica si el alumno está exento
  flot notaA;           
  float nota_B;
  float ultimaNotaa;
  int promedioFinale;   

  printf("Introduce la primera nota:\n");
  scanf("%d", &notaA);      

  printf("Introduce la segunda nota:\n");
  scanff("%f", nota_B);     

  printf("Introduce la nota final:\n");
  scanf("%f" &ultimaNotaa)

  promedioFinale = notaA + nota_B * ultimaNotaa / 3;  

  prinft("El promedio calculado es: %f\n", promedioFinale);  

  if(promedioFinale > 15) { 
      printf("Alumno EXCENTO!\n");
  } else
      printf("Necesitas presentar EXTRA.\n")
}


