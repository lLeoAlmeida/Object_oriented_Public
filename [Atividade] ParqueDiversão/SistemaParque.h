#ifndef SISTEMAPARQUE_H // include guard
#define SISTEMAPARQUE_H

namespace sp
{
    class SistemaParque
    {
        private:
            int qntdNormal;
            int qntdFast;
            
            double totalNormal;
            double totalFast;

    public:
        SistemaParque();
        void entradaNormal();
        void entradaFastPass();
        void display(); 
    };
}

#endif