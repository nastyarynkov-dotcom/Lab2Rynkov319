#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;
int main()
{
// Integer7. Дано двозначне число. Знайти суму і добуток його цифр.
cout << "Integer7." << endl;
int n, tens, units, sum, product; // декларація цілих змінних
// введення данних
cout << endl << "n = "; cin >> n;
// підрахунок
tens = n / 10;          // десятки
units = n % 10;         // одиниці
sum = tens + units;     // сума цифр
product = tens * units; // добуток цифр
// виведення результату
cout << "Sum of digits = " << sum << endl;
cout << "Product of digits = " << product << endl;

// Boolean34. Дано координати поля шахівниці x, y (цілі числа, що лежать в діапазоні 1-8). 
// З огляду на, що ліве нижнє поле дошки (1, 1) є чорним, перевірити істинність 
// висловлювання: «Дане поле є білим».
cout << "\n Boolean34. \n";
int x_chess, y_chess;
// введення данних
cout << "x (1-8) = "; cin >> x_chess;
cout << "y (1-8) = "; cin >> y_chess;
// підрахунок
bool is_white = (x_chess + y_chess) % 2 != 0; // визначення ЛОГІЧНОЇ змінної
// виведення результату
cout << "The field is white: " << boolalpha << is_white << endl;

// y = ... (Math.24)
cout << "\n Math.24. \n";
const double pi = 3.141592; // визначення дійсної константи
double x, num, denom, sin_x2, sin2_x2, y; // декларація дійсних змінних
// введення данних
cout << "Real argument x = ";
cin >> x;
// підрахунок
sin_x2 = sin(x * x);
sin2_x2 = sin_x2 * sin_x2; // проміжна змінна sin^2(x^2)
num = pow(1.5, x * sin2_x2) * cbrt(2 * fabs(sin(3 * x + 24 * pi / 180) * (log(fabs(x * x * x)) / log(3)))); // чисельник
denom = tan(2 * x) * sin(pow(x, 3)); // знаменник
y = num / denom;
// виведення результату
cout << "Function y = " << y << endl;
return 0;
}
