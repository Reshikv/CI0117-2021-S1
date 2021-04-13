# CI0117 - Actividad de clase 1

## Ejercicio 1

- Compile y ejecute el programa hello_goodbye.c
- Comprenda el código y discuta junto a su grupo de trabajo lo siguiente:
  - ¿Cuántos hilos diferentes se ejecutan en el programa?
  - ¿Se da o no concurrencia entre todos los hilos de ejecución?
  - ¿Cuáles líneas del programa se ejecutan de forma cocurrente?

## Ejercicio 2

Cree un programa en c que realice lo siguiente:
- Un hilo principal (main) crea un hilo secundario
- El hilo principal debe pasar un valor numérico al hilo secundario (dicho valor es definido por el hilo principal)
- El hilo secundario realiza una operación simple con ese valor (por ej. lo multiplica por 2, le suma 1, etc.).
- El hilo principal imprime el nuevo valor calculaldo (El hilo secundario no debe imprimir ningún mensaje).
