#include <stdio.h>
/**
 *       main - Entry point
 *
 *         Return: Always 0 (Success)
 */
int main(void)
{
int Int_type;
double Doub_type;
float Flo_type;
char Character_type;

printf("Size of int: %ld bytes \n", sizeof(Int_type));
printf("Size of double: %ld bytes \n", sizeof(Doub_type));
printf("Size of float: %ld bytes \n", sizeof(Flo_type));
printf("Size char: %ld bytes \n", sizeof(Character_type));
return (0);
}
