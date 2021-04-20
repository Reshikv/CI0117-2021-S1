# CI0117 - Actividad de clase 2

## Ejercicio 1

- Descargar, compilar y ejecutar el programa hello_iw_shr.c 
- Discutir las siguientes preguntas y preparar una respuesta común
  - ¿Qué ventaja tiene el uso de la estructura **private_data_t** en este programa respecto de haber creado un arreglo local de tamaño thread_count dentro de la subturina create_threads?
```
private_data_t private_data [thread_count];
```
  - ¿Qué ventaja o desventaja tiene el uso de la estructura **shared_data_t** en este programa respecto de haberla creado como una variable local de la subrutina create_threads o como una variable global del programa?

- Use las herramientas de chequeo dinámico y estático y advertir sobre problemas en el código.
