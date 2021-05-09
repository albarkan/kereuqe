/* На вход вашей программы в стандартном потоке ввода подаются действительные коэффициенты A, B и C уравнения Ax² + Bx + C = 0. 
Выведите все его различные действительные корни в поток вывода в любом порядке, при этом разделяя корни пробелами.Гарантируется,
что хотя бы один из коэффициентов уравнения не равен нулю. */
/*	001
	010
	011
	100
	101
	110
	111	*/
#include <iostream>
#include <cmath>

int main() {
	float A = 0, B = 0, C = 0, D = 0;

	if (!(std::cin >> A)) { return 1; }
	if (!(std::cin >> B)) { return 1; }
	if (!(std::cin >> C)) { return 1; }
	 
	if (A == 0 && B == 0 && C != 0)
	{
		std::cout << " ";
		return 0;
	}
	else if (A == 0 && B != 0 && C == 0)
	{
		std::cout << "0";
		return 0;
	}
	else if (A == 0 && B != 0 && C != 0)
	{
		std::cout << -C / B;
		return 0;
	}
	if (A != 0 && B == 0 && C == 0)
	{
		std::cout << "0";
	}
	else if (A != 0 && B == 0 && C != 0)
	{
		std::cout << " ";
		return 0;
	}
	else if (A != 0 && B != 0 && C == 0)
	{
		std::cout << "0" << " "<< -B / A;
		return 0;
	}
	else {
		D = B * B - 4 * A * C;
		if (D == 0) {
			std::cout << -B / 2 / A;
			return 0;
		}
		else if (D > 0) {
			std::cout << (-B + sqrt(D)) / 2 / A << " " << (-B - sqrt(D)) / 2 / A;
			return 0;
		}
		else if (D < 0) {
			std::cout << " ";
			return 0;
		}
	}
}

