#include <iostream>
#include <windows.h>

class Figure {
protected:
    int sides_count;
    std::string name;

public:
    Figure()
    {
        sides_count = 0;
        name = "Фигура";
    }

    Figure(int sides_count, std::string name)
    {
        this->sides_count = sides_count;
        this->name = name;
    }

    std::string get_name() {
        return name;
    };

    int get_sides_count() {
        return sides_count;
    };

    bool check() {
        return 1;
    };

    void print_info() {
        std::cout << get_name() << std::endl;
        if (check() == 1) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << get_sides_count() << std::endl << std::endl;
    }    
};

class Triangle : public Figure
{
public:

    int length_side_a;
    int length_side_b;
    int length_side_c;
    int value_angle_A;
    int value_angle_B;
    int value_angle_C;

    Triangle()
    {
        sides_count = 3;
        name = "Треугольник";
        length_side_a = 10;
        length_side_b = 20;
        length_side_c = 30;
        value_angle_A = 50;
        value_angle_B = 60;
        value_angle_C = 70;
    }

    Triangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c,
        int value_angle_A, int value_angle_B, int value_angle_C)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        this->length_side_c = length_side_c;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        this->value_angle_C = value_angle_C;
    }

    int get_lenght_side_a()
    {
        return length_side_a;
    };

    int get_lenght_side_b()
    {
        return length_side_b;
    };

    int get_lenght_side_c()
    {
        return length_side_c;
    };

    int get_value_angle_A()
    {
        return value_angle_A;
    };

    int get_value_angle_B()
    {
        return value_angle_B;
    };

    int get_value_angle_C()
    {
        return value_angle_C;
    };

    bool check() {
        if (((length_side_a == length_side_b) && (length_side_b == length_side_c) && (length_side_a == length_side_c)) &&
            ((value_angle_A == value_angle_B) && (value_angle_B == value_angle_C) && (value_angle_A == value_angle_C)))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    };

    void print_info() {
        std::cout << get_name() << std::endl;
        if (check() == 1) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << get_sides_count() << std::endl;
        std::cout << "Стороны: " << " a = " << get_lenght_side_a() << " b = " << get_lenght_side_b() << " c = " << get_lenght_side_c() << std::endl;
        std::cout << "Углы: " << " А = " << get_value_angle_A() << " B = " << get_value_angle_B() << " C = " << get_value_angle_C() << std::endl << std::endl;
    }
};

class Right_triangle : public Triangle
{
public:
    Right_triangle()
    {
        name = "Прямоугольный треугольник";
        value_angle_C = 90;
    }

    Right_triangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c,
        int value_angle_A, int value_angle_B, int value_angle_C)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        this->length_side_c = length_side_c;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        this->value_angle_C = value_angle_C;
    }
};

class Isosceles_triangle : public Triangle {
public:
    Isosceles_triangle()
    {
        name = "Равнобедренный треугольник";
        length_side_c = 10;
        value_angle_C = 50;
    }
};

class Equilateral_triangle : public Triangle {
public:

    Equilateral_triangle()

    {
        name = "Равносторонний треугольник";
        length_side_a = length_side_b = length_side_c = 30;
        value_angle_A = value_angle_B = value_angle_C = 60;
    }
};

class Quadrangle : public Triangle
{
public:
    int length_side_d;
    int value_angle_D;

    Quadrangle()
    {
        name = "Четырёхугольник";
        length_side_a = 10;
        length_side_d = 20;
        length_side_c = 30;
        length_side_d = 40;
        value_angle_A = 50;
        value_angle_B = 60;
        value_angle_C = 70;
        value_angle_D = 80;
    }

    Quadrangle(int length_side_d, int value_angle_D)
    {
        this->length_side_d = length_side_d;
        this->value_angle_D = value_angle_D;
    }

    int get_lenght_side_d()
    {
        return length_side_d;
    };

    int get_value_angle_D()
    {
        return value_angle_D;
    };

    bool check() {
        if (((length_side_a == length_side_b) && (length_side_b == length_side_c) && (length_side_c == length_side_d) && (length_side_a == length_side_d)) &&
            ((value_angle_A == value_angle_B) && (value_angle_B == value_angle_C) && (value_angle_C == value_angle_D) && (value_angle_A == value_angle_D)))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    };

    void print_info() {
        std::cout << get_name() << std::endl;
        if (check() == 1) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << get_sides_count() << std::endl;
        std::cout << "Стороны: " << " a = " << get_lenght_side_a() << " b = " << get_lenght_side_b() << " c = " << get_lenght_side_c() <<
            " d = " << get_lenght_side_d() << std::endl;
        std::cout << "Углы: " << " А = " << get_value_angle_A() << " B = " << get_value_angle_B() << " C = " << get_value_angle_C() <<
            " D = " << get_value_angle_D() << std::endl << std::endl;
    }
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram()
    {
        name = "Параллелограмм";
        length_side_a = length_side_c = 20;
        length_side_b = length_side_d = 30;
        value_angle_A = value_angle_C = 30;
        value_angle_B = value_angle_D = 40;
    }
};

class Rectangle1 : public Parallelogram
{
public:
    Rectangle1()
    {
        name = "Прямоугольник";
        length_side_a = length_side_c = 10;
        length_side_b = length_side_d = 20;
        value_angle_A = value_angle_C = value_angle_B = value_angle_D = 90;
    }
};

class Rhombus : public Parallelogram
{
public:
    Rhombus()
    {
        name = "Ромб";
        length_side_a = length_side_b = length_side_c = length_side_d = 30;
        value_angle_A = value_angle_C = 30;
        value_angle_B = value_angle_D = 40;
    }
};

class Square : public Quadrangle
{
public:
    Square()
    {
        name = "Квадрат";
        length_side_a = length_side_b = length_side_c = length_side_d = 20;
        value_angle_A = value_angle_B = value_angle_C = value_angle_D = 90;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::system("chcp 1251");

    Figure f;
    f.print_info();

    Triangle tr;
    tr.print_info();

    Right_triangle rt;
    rt.print_info();

    Isosceles_triangle itr;
    itr.print_info();

    Equilateral_triangle etr;
    etr.print_info();

    Quadrangle qv;
    qv.print_info();

    Rectangle1 rct;
    rct.print_info();

    Square sq;
    sq.print_info();

    Parallelogram prl;
    prl.print_info();

    Rhombus rh;
    rh.print_info();
}