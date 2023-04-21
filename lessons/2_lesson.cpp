#include <numeric>
#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;

//пример перечисления (обращение к его элементам - Sizes::SMALL , Sizes::COLOSSAL и т.п)
enum Sizes
{
    SMALL,
    MEDIUM,
    LARGE,
    COLOSSAL
};



class Rational {
public:
    //конструктор по умолчанию
    Rational() = default;

    //конструктор по числителю
    Rational(int numerator)
        : numerator_(numerator)
        , denominator_(1) {
    }

    //конструктор по числителю и знаменателю
    Rational(int numerator, int denominator)
        : numerator_(numerator)
        , denominator_(denominator) {
        Normalize();
    }

    //возврат значения числителя
    int Numerator() const {
        return numerator_;
    }

    //возврат значения знаменателя
    int Denominator() const {
        return denominator_;
    }

    //перегрузка операторов присваивания пишется внутри структур(классов), с которыми идет работа в них
    Rational operator+=(Rational& right)
    {
        numerator_ = numerator_ * right.Denominator() + right.Numerator() * denominator_;
        denominator_ = denominator_ * right.Denominator();
        Normalize();
        return *this;
    }
    Rational operator-=(Rational& right)
    {
        numerator_ = numerator_ * right.Denominator() - right.Numerator() * denominator_;
        denominator_ = denominator_ * right.Denominator();
        Normalize();
        return *this;
    }
    Rational operator*=(Rational& right)
    {
        numerator_ *= right.Numerator();
        denominator_ *= right.Denominator();
        Normalize();
        return *this;
    }Rational operator/=(Rational& right)
    {
        numerator_ *= right.Denominator();
        denominator_ *= right.Numerator();
        Normalize();
        return *this;
    }



private:
    void Normalize() 
    {
        if (denominator_ < 0) 
        {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }
        const int divisor = gcd(numerator_, denominator_);
        numerator_ /= divisor;
        denominator_ /= divisor;
    }

    int numerator_ = 0;
    int denominator_ = 1;
};

//перегрузка оператора вывода
std::ostream& operator <<(ostream& os, Rational& number)
{
    os << number.Numerator() << "/"s << number.Denominator();
    return os;
}

//перегрузка оператора ввода
std::istream& operator >>(istream& is, Rational& number)
{
    int num, denom;
    char slash;
    is >> num >> slash >> denom;
    number = Rational(num, denom);
    return is;
}

//перегрузка бинарного оператора сложения
Rational operator+(Rational& first, Rational& second)
{
    int denom = first.Denominator() * second.Denominator();
    int num = first.Numerator() * second.Denominator() + second.Numerator() * first.Denominator();
    Rational drob = Rational(num, denom);
    return drob;
}

//перегрузка унарного плюса
Rational operator+(Rational& first)
{
    return { first.Numerator(), first.Denominator() };
}

//перегрузка бинарного оператора вычитания
Rational operator-(Rational& first)
{
    return { -first.Numerator(), first.Denominator() };
}

//перегрузка унарного минуса
Rational operator-(Rational& first, Rational& second)
{
    int denom = first.Denominator() * second.Denominator();
    int num = first.Numerator() * second.Denominator() - second.Numerator() * first.Denominator();
    Rational drob = Rational(num, denom);
    return drob;
}


//умная перегрузка с помощью *=, /=, -=, += (нет дублирования кода как выше)
Rational operator+(Rational left, Rational right) {
    return left += right;
}

Rational operator-(Rational left, Rational right) {
    return left -= right;
}

Rational operator*(Rational left, Rational right) {
    return left *= right;
}

Rational operator/(Rational left, Rational right) {
    return left /= right;
}


//перегруженные операторы можно также использовать в других операторах(как здесь реализация != через == и т.п.)
bool operator==(Rational left, Rational right) {
    return left.Numerator() == right.Numerator() &&
        left.Denominator() == right.Denominator();
}

bool operator!=(Rational left, Rational right) {
    return !(left == right);
}

bool operator<(Rational left, Rational right) {
    int numer_1, numer_2;
    numer_1 = left.Numerator() * right.Denominator();
    numer_2 = right.Numerator() * left.Denominator();

    return numer_1 < numer_2;
}
bool operator>(Rational left, Rational right) {
    int numer_1, numer_2;
    numer_1 = left.Numerator() * right.Denominator();
    numer_2 = right.Numerator() * left.Denominator();

    return numer_1 > numer_2;
}
bool operator<=(Rational left, Rational right) {
    return left < right ||
        left == right;
}
bool operator>=(Rational left, Rational right) {
    return left > right ||
        left == right;
}


int main()
{
    std::vector <int> line;
    sort(line.begin(), line.end(), /*Лямбда-функция*/ [/*Внешние параметры*/](/*Параметры, что получает функция на вход*/) {
        /*Тело функции*/
        });
}