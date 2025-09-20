// comentario Unilinear

/*
comentarios
multilineales
klk mi gente
*/

// importo la libreria nativa "iostream" *obligatorio
// me permite interactual con un programa desde cero
#include <iostream>


// defino la funcion principal *obligatorio que se llame main
int main() {
    // mostrar informacion en pantalla
    std::cout << "Tipos de datos en c++:" << std::endl;
    //texto
    std::cout << "Alexander Sarita" << std::endl;
     std::cout << "4" << std::endl;
     
     //numeros enteros
       std::cout << 4 << std::endl;
       
       //decimal
       std::cout << 4.5 << std::endl;
       
       //booleanos:
       // se representa con un 1 si es verdadero, y con un 0 si es falso
        std::cout << (4 < 5) << std::endl;
         std::cout << (4 == 5) << std::endl;
          std::cout << (5 > 4) << std::endl;
          std::cout << true << std::endl;
          std::cout << false << std::endl;
          
          //para contrololar el flujo de muestra logica
          //permite comparar valores
          //controlan que bloque de codigo se va a ejecutar dependeiendo de la comparacion.
          //declaramos una variable llamada de edad , y le asigno un valor numerico de tipo entero.
          int edad = 33;
          
          //estrucuras basica de un if
          if (edad <= 1 && edad >=17) {
          std::cout << "Eres menor de edad" <<std::endl;
          } else if (edad <= 18&& edad >=59) {
            std::cout << "Eres mayor adulto/a" <<std::endl;
          } else {
              std::cout << "Eres un mayor viejo/a" <<std::endl;
          }

 //siempre al final de la funcion, se debe colocar esta linea de codigo que indica que el programa si llega a esta linea, esto es por que se esta ejecutando

    return 0;
}
