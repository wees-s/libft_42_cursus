# libft 42 cursus
The first project of the common core at 42 is called 'libft', where we create our own library by manually recreating all the functions included in it.


*PT-BR*
1 - isalnum / isalpha / isascii / isdigit / isprint;
São funções muito básicas que se resumem a retornar um valor verdadeiro ou falso de acordo com a tabela ascii.
Exemplo da aplicação mais complexa entre elas --> ft_isalnum(int c);
((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
Fiz 3 comparações básicas de suas regiões na tebela ascii procurando informações verdadeiras. Caso o valor de (int c) seja equivalente ao valor comparado decimal na ascii o valor retornado é (VERDADEIRO = (1)), caso contrário o valor é (FALSO = (0)).

2 - toupper / tolower
Seu nome já diz, um valor recebido da tabela ascii é convertido em seu valor UPPER ou LOWER. Exemplo:
if (ch >= 65 && ch <= 90)
		return (ch + 32);
Se o valor for entre A e Z, retorne o valor na ascii equivalente a lower (+32 na tabela).

3 - memchr
Uma função que encontra em uma região da memória passada um valor equivalente (unsigned char). Diferentemente da strchr que necessáriamente precisa receber uma string (do tipo char ou equivalente), a memchr nós convertemos o valor, seja ele qual for, para unsigned char e comparamos independentemente do que foi passado (const void).
É passado também um valor para delimitar a comparação.
void	*ft_memchr(const void *s, int c, size_t n)

É feita uma conversão:
unsigned char	cc;
unsigned char	*ss;

E depois é feita a comparação:
while (i < n)
{
		if (ss[i] == cc)
			return ((void *)&ss[i]);
		i++;
}

(...)
