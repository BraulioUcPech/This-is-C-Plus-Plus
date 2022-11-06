#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("teclea un numero ");
    scanf("%d",&num);

    if (num % 3 == 0){
        printf("es divisbile %d",num);

    }
    if (num > 0){
        printf("es positivo %d",num);
    }
    if (num < 0){
        printf("negativo %d",num);
    }


    system("pause");
    return 0;
    
    
    
    
    
    /* Console.WriteLine("¡hola time of Software!");
            Console.ReadKey(); */        // el "readkey no pudes interactuar en la consola"

            /* Console.Write("hola");    // el "write" no da salto de linea 
            Console.Write("¿que haces?");
            Console.WriteLine();        //el "writeline" da salto de linea y no tiene un mensaje hace un salto de linea para el otro codigo 
            Console.WriteLine("hola");
            Console.WriteLine("que haces?");
            Console.ReadLine(); */      // el "readline" te permite escribir el la consola para almacenar informacion del usuario y interactuar, se usa para teclear datos que preguntas al usuario

            /* int edadUsuario = 16;
            string nombreUsuario = "Braulio";
            Console.WriteLine("Hola me llamo" + nombreUsuario + "y tengo" + edadUsuario + "años.");
            Console.WriteLine("hola me llamo {0} y tengo {1} años.",nombreUsuario,edadUsuario);
            Console.WriteLine("Hola me llamo" + nombreUsuario+ ".\nTengo" + edadUsuario + "años.");
            Console.WriteLine("hola me llamo \"{0}\" y tengo \"{1}\" años.",nombreUsuario,edadUsuario);
            Console.ReadLine(); */
}
