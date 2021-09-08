/*TASK*/
/*To find solution of equation f(x) = (x - g * k)^2 + sin(x - g * k) = 0 
(where g and k any numbers, start - begin of segment, end - end of segment, eps - precision) using bisection method*/
/*Знайти розв'язок рівняння f(x) = (x - g * k)^2 + sin(x - g * k) = 0
(де g і k будь-які цифри, start - початок відрізка, end - кінець відрізка, eps - точність) використовуючи метод половинного ділення*/

#include <iostream>
#include <math.h>

using namespace std;

float func(float x, int g, int k) {
	return pow((x - g * k), 2.0) + sin(x - g * k);	
}

void bisection(float start, float end, int g, int k, float eps) {
	float x = 0;
	cout << endl << "Bisection method" << endl;
	do
	{
		x = (start + end) / 2;
		if (func(x, g, k) == 0) {
			break;
		}
		if (func(x, g, k) * func(start, g, k) < 0) {
			end = x;
		}else {
			start = x;
		}
	} while (abs(end - start) > eps);
	cout << "x = " << x << endl;
}

int main()
{
	int g = 9;
	int k = 7;
	float start;
	float end;
	float eps = 0.01;
	cout << "Start = ";
	cin >> start;
	cout << "End = ";
	cin >> end;
	bisection(start, end, g, k, eps);
}