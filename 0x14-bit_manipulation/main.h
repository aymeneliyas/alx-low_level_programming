#ifndef HOLBERTON
#define HOLBERTON
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
int _strlen(const char *s);
int power(int base, long int exponent);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
char *decToBinary(unsigned long int n);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif

