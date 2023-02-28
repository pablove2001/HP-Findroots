<h1 align="center">Findroots</h1>

### ¿Qué hace el programa?
La función de este programa es calcular las raíces reales de un polinomio de tercer grado (ax^3^+bx^2^+cx+d).

### ¿Cómo funciona el programa?

Dentro del archivo /findroots/findroots.cpp se encuentra la función main() de este programa.

1. Se declaran variables

2. Si el número de argumentos es diferente a 4, se retorna un error

3. Convertir los argumentos a doubles

4. Si el argumento a es 0, se retorna un error

5. Se obtienen los coeficientes reducidos

6. Se obtiene la discriminante

7. Y dependiendo del valor de la discriminante serian el número de raíces a retornar y el tipo de formula a utilizar.

### ¿Cómo probar el código?

Ejecuta los siguientes comandos para clonar el repositorio, entrar dentro de la carpeta generada y ejecutar el programa.

    git clone https://github.com/pablove2001/HP-Findroots.git
    cd HP-Findroots
    .\findroots.exe 1 -3 -3 1

### Ejemplos de su funcionamiento
Ejemplo 1:
![image](https://user-images.githubusercontent.com/52970365/221765981-43c432ad-1fd4-46ed-acca-4bfc722c9268.png)
![image](https://user-images.githubusercontent.com/52970365/221766194-15e56fff-4835-42ed-94eb-e7b1e27f4256.png)

Ejemplo 2:
![image](https://user-images.githubusercontent.com/52970365/221766313-1c698324-d4c8-4358-8eb0-b35acdfbe976.png)
![image](https://user-images.githubusercontent.com/52970365/221766414-b0979a43-567f-4583-b559-51a5734907b4.png)

Ejemplo 3:
![image](https://user-images.githubusercontent.com/52970365/221766575-f8177df8-2149-4562-a880-eb3f443022f6.png)
![image](https://user-images.githubusercontent.com/52970365/221766698-01bb1bdd-2691-488e-9535-fb1bba8accfb.png)
