#include <iostream>
#include <string>
#include <windows.h>

class Figure {
public:
    int sides_count;
    std::string name;
    std::string quality;

public:

    Figure()
    {
        name = "Фигура";
        quality = "Правильная";
        sides_count = 0;    
    }

    Figure( std::string name, std::string quantity, int sides_count)
    {
        this->name = name;
        this->quality = quantity;
        this->sides_count = sides_count;   
    }
    
    virtual void print_info()
    {
        std::cout << name << ": " << std::endl;
        std::cout << quality << std::endl;;
        std::cout << "Количество сторон: " << sides_count << std::endl;
        std::cout << std::endl;
    };

    bool check()
    {

    };
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

    void print_info() override
    {
        std::cout << "Треугольник" << ": " << std::endl;
        std::cout << "Правильная" << std::endl;
        std::cout << "Количество сторон: " << 3 << std::endl;
        print_sides_length();
        print_angles_value();

        std::cout << std::endl;
    };

    void get_lenght_side_a()
    {
        this->length_side_a;
    };

    void get_lenght_side_b()
    {
        length_side_b;
    };

    void get_lenght_side_c()
    {
        length_side_c = 30;
    };

    void get_value_angle_A()
    {
        value_angle_A;
    };

    void get_value_angle_B()
    {
        value_angle_B;
    };

    void get_value_angle_C()
    {
        value_angle_C;
    };

    void print_sides_length()
    {
        std::cout << "Стороны: " << "a = " << length_side_a << " b = " << length_side_b << " c = " << length_side_c << std::endl;
    };

    void print_angles_value()
    {
        std::cout << "Углы: " << "A = " << value_angle_A << " B = " << value_angle_B << " C = " << value_angle_C << std::endl << std::endl;
    };
};

class Right_triangle : public Triangle
{
public:

    Right_triangle()
    {
        value_angle_C = 90;
    }

    void get_name() {
        std::cout << "Прямоугольный треугольник" << std::endl;
    }

    void print_info() override
    {
        get_name();
        std::cout << "Правильная" << std::endl;
        std::cout << "Количество сторон: " << 3 << std::endl;
        print_sides_length();
        print_angles_value();

        std::cout << std::endl;
    };
};

class Isosceles_triangle : public Triangle {
public:

    Isosceles_triangle()
    {
        length_side_c = 10;
        value_angle_C = 50;
    }

    void get_name() {
        std::cout << "Равнобедренный треугольник" << std::endl;
    }

    void print_info() override
    {
        get_name();
        std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << 3 << std::endl;
        print_sides_length();
        print_angles_value();

        std::cout << std::endl;
    };
};

class Equilateral_triangle : public Triangle {
public:

    Equilateral_triangle()
    {
        length_side_a = length_side_b = length_side_c = 30;
        value_angle_A = value_angle_B = value_angle_C = 60;
    }

    void get_name() {
        std::cout << "Равносторонний треугольник" << std::endl;
    }

    void print_info() override
    {
        get_name();
        std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << 3 << std::endl;
        print_sides_length();
        print_angles_value();

        std::cout << std::endl;
    };
};

class Quadrangle : public Triangle
{
public:
    int length_side_d;
    int value_angle_D;

    Quadrangle()
    {
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

    void get_name() {
        std::cout << "Четырёхугольник" << std::endl;
    }

    void print_sides_length()
    {
        std::cout << "Стороны: " << "a = " << length_side_a << " b = " << length_side_b <<
            " c = " << length_side_c << " d = " << length_side_d << std::endl;
    };

    void print_angles_value()
    {
        std::cout << "Углы: " << "A = " << value_angle_A << " B = " << value_angle_B <<
            " C = " << value_angle_C << " D = " << value_angle_D << std::endl << std::endl;
    };

    void print_info() override
    {
        get_name();
        std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << 4 << std::endl;
        print_sides_length();
        print_angles_value();

        std::cout << std::endl;
    };
};

class Parallelogram : public Quadrangle
{
public:

    void get_name() {
        std::cout << "Параллелограмм" << std::endl;
    }

    Parallelogram()
    {
        length_side_a = length_side_c = 20;
        length_side_b = length_side_d = 30;
        value_angle_A = value_angle_C = 30;
        value_angle_B = value_angle_D = 40;
    }

    void print_info() override
    {
        get_name();
        std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << 4 << std::endl;
        print_sides_length();
        print_angles_value();

        std::cout << std::endl;
    };
};

class Rectangle1 : public Parallelogram
{
public:

    void get_name() {
        std::cout << "Прямоугольник" << std::endl;
    }

    Rectangle1()
    {
        length_side_a = length_side_c = 10;
        length_side_b = length_side_d = 20;
        value_angle_A = value_angle_C = value_angle_B = value_angle_D = 90;
    }

    void print_info() override
    {
        get_name();
        std::cout << "Правильная" << std::endl;
        std::cout << "Количество сторон: " << 4 << std::endl;
        print_sides_length();
        print_angles_value();

        std::cout << std::endl;
    };
};

class Rhombus : public Parallelogram
{
public:

    void get_name() {
        std::cout << "Ромб" << std::endl;
    }

    Rhombus()
    {
        length_side_a = length_side_b = length_side_c = length_side_d = 30;
        value_angle_A = value_angle_C = 30;
        value_angle_B = value_angle_D = 40;
    }

    void print_info() override
    {
        get_name();
        std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << 4 << std::endl;
        print_sides_length();
        print_angles_value();

        std::cout << std::endl;
    };
};

class Square : public Quadrangle
{
public:

    void get_name() {
        std::cout << "Квадрат" << std::endl;
    }

    Square()
    {
        length_side_a = length_side_b = length_side_c = length_side_d = 20;
        value_angle_A = value_angle_B = value_angle_C = value_angle_D = 90;
    }

    void print_info() override
    {
        get_name();
        std::cout << "Правильная" << std::endl;
        std::cout << "Количество сторон: " << 4 << std::endl;
        print_sides_length();
        print_angles_value();

        std::cout << std::endl;
    };
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::system("chcp 1251");

    Figure f;
    Triangle tr;

    Figure* pointer_f = &f;
    pointer_f->print_info(); 
    
    Triangle* pointer_tr = &tr;
    pointer_tr->print_info();
    
    Right_triangle rt;
    Right_triangle* pointer_rt = &rt;
    pointer_rt->print_info();

    Isosceles_triangle itr;
    Isosceles_triangle* pointer_itr = &itr;
    pointer_itr->print_info();

    Equilateral_triangle etr;
    Equilateral_triangle* pointer_etr = &etr;
    pointer_etr ->print_info();

    Quadrangle qv;
    Quadrangle* pointer_qv = &qv;
    pointer_qv->print_info();
  
    Rectangle1 rct;
    Rectangle1* pointer_rct = &rct;
    pointer_rct-> print_info();

    Square sq;
    Square* pointer_sq = &sq;
    pointer_sq->print_info();

    Parallelogram prl;
    Parallelogram* pointer_prl = &prl;
    pointer_sq ->print_info();

    Rhombus rh;
    Rhombus* pointer_rh = &rh;
    pointer_rh->print_info();
}
