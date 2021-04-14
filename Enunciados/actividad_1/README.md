# CI0117 - Actividad de clase 1

## Ejercicio 1

- Compile y ejecute el programa hello_goodbye.c
- Comprenda el código y discuta junto a su grupo de trabajo lo siguiente:
  - ¿Cuántos hilos diferentes se ejecutan en el programa?
  - ¿Se da o no concurrencia entre todos los hilos de ejecución?¿La salida del programa evidencia algún problema de concurrencia?
  - ¿Cuáles líneas del programa se ejecutan de forma concurrente?
  - Anote las respuestas a las preguntas anteriores, las cuales serán discutidas luego de la activdad.

## Ejercicio 2 [main_secondary_op]

Suba la solucion a su repositorio personal de Github, siguiendo la siguiente estructura de folders:

```
/acividades/[número de actividad]/[nombre de ejercicio]/
```

Cree un programa en c que realice lo siguiente. 
- Un hilo principal (main) crea un hilo secundario.
- El hilo principal debe pasar un valor numérico al hilo secundario (dicho valor es definido por el hilo principal).
- El hilo secundario realiza una operación simple con ese valor (por ej. lo multiplica por 2, le suma 1, etc.).
- El hilo principal imprime el nuevo valor calculaldo (El hilo secundario no debe imprimir ningún mensaje).
Cree un archivo Makefile básico para compilar su programa.

## Ejercicio 3
Solicitar enunciados a los profesores.
