#include<math.h>
#include<stdio.h>

//Функция проверки(Задание-1)
_Bool select(float x, float y) 
{
	float gp;
	gp = sqrt((x*x) + (y*y));
	if (gp >= 1 && gp<=sqrt(2))
		return 1;
	else
		return 0;
}

//Вычисление выражения(Задание-2)
float expression(float x)
{	
	return x >= 4 ? sqrt((x*x) + 4) : cos(abs(x + 2));
}


//Ввод числа с плавающей точкой
float input_f()
{
	float s;
	scanf_s("%f", &s);
	return s;
}

//Ввод символа
char input_c()
{
	char s="";
	scanf_s("%c", &s);
	return s;
}