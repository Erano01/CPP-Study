
class Vector
{
public:
    Vector(int s);
    double &operator[](int i);
    int size();

private:
    // Invariant, bir nesnenin veya yapının her zaman doğru olması gereken durumu demektir.
    // Amaç: Hata oluşmadan önce mantıksal tutarlılığı korumak.
    // Invariant -> Değişmemesi gereken kurallar, koşullar, ilişkiler.

    int sz; // elem points to an array of sz doubles
    double *elem;

    // 1. invariant sz -> negatif olmamalı
    // 2. invariant elem -> null pointer olmamalı
};
