#include <stdio.h>
/**
 *       main - Entry point
 *
 *         Return: Always 0 (Success)
 */
int main(void)
{
int Int_type;
long int Lon_Int_type;
double Doub_type;
float Flo_type;
char Character_type;

printf("Size of int: %lu bytes \n", (unsigned long)sizeof(Int_type));
printf("Size of Long int: %lu bytes \n", (unsigned long)sizeof(Lon_Int_type));
printf("Size of double: %lu bytes \n", (unsigned long)sizeof(Doub_type));
printf("Size of float: %lu bytes \n", (unsigned long)sizeof(Flo_type));
printf("Size char: %lu bytes \n", (unsigned long)sizeof(Character_type));
return (0);
}
