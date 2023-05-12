#include <stdio.h>

//Prototipos de funciones y procedimientos
void pedirnums(float *a, float *b);
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

void main()
{
    float num1, num2;
    int op;
    do //Validación de operación
    {
    printf("Ingrese el n%cmero correspondiente a la operaci%cn que desea realizar. (1: Suma, 2: Resta, 3: Multiplicaci%cn, 4: Divisi%cn)\n", 117, 162, 162, 162);
    scanf("%d", &op);
    }while((op < 1)||(op > 4));
    pedirnums(&num1, &num2); //Llamada al procedimiento para pedir números a operar
    switch (op) //Selección de operación en base al número dado
    {
        case(1):
        {
            printf("%.2f + %.2f = %.2f", num1, num2, suma(num1, num2));
            break;
        }
        case(2):
        {
            printf("%.2f - %.2f = %.2f", num1, num2, resta(num1, num2));
            break;
        }
        case(3):
        {
            printf("%.2f x %.2f = %.2f", num1, num2, multiplicacion(num1, num2));
            break;
        }
        case(4):
        {
            if(num2 == 0) //Verificación de que el denominador no sea cero
            {
                printf("%.2f / %.2f es una operaci%cn inv%clida.\n", num1, num2, 117, 160);
            }
            else
            {
                printf("%.2f / %.2f = %.2f", num1, num2, division(num1, num2));
            }
            break;
        }
        default: //Caso hipotético de error al elegir operación
        {
            printf("No ha seleccionado una operaci%cn v%clida", 162, 160);
            break;
        }
    }
}

void pedirnums(float *a, float *b)
{
    printf("Ingrese los n%cmeros a operar\nN%cmero 1: ", 117, 117);
    scanf("%f", &*a);
    printf("N%cmero 2: ", 117);
    scanf("%f", &*b);
}
//Funciones algebraicas:
float suma(float a, float b)
{
    float c = a + b;
    return c;
}
float resta(float a, float b)
{
    float c = a - b;
    return c;
}
float multiplicacion(float a, float b)
{
    float c = a * b;
    return c;
}
float division(float a, float b)
{
    float c = a / b;
    return c; 
}