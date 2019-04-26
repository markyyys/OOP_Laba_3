#pragma once
class Vector
{
private:
	int x;
	int y;

public:
	double modul = -1;

	Vector vector_input()
	{
		cout << "Enter vector coords (with ' '): ";
		cin >> x >> y;

		return Vector(x, y);
	}

	double vector_modul()
	{
		modul = sqrt(pow(x, 2) + pow(y, 2));

		return modul;
	}

	Vector vector_sum(Vector *v2)
	{
		x += v2->x;
		y += v2->y;

		return Vector(x, y);
	}

	Vector vector_minus(Vector *v2)
	{
		x -= v2->x;
		y -= v2->y;

		return Vector(x, y);
	}

	void vector_output()
	{
		cout << "Result of action with vectors: " << x << "," << y << endl;
	}

	Vector(){}
	Vector(int x, int y): x(x), y(y){}
	~Vector(){}
};