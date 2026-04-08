
namespace erano_collections
{
    class Vector
    {
    public:
        Vector(int s);
        double &operator[](int i);
        int size();

    private:
        int sz; // elem points to an array of sz doubles
        double *elem;
    };
}
