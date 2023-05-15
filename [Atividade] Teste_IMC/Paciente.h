using namespace std;

namespace pac
{
    class Paciente
    {
    private:
        string Nome;
        double Peso;
        double Altura;

    public:
        Paciente();
        void SetNome(string n);
        string GetNome();
        void SetPeso(double p);
        double GetPeso();
        void SetAltura(double a);
        double GetAltura();
        void CalcularIMC();
        void ClassificarIMC();
    };
}