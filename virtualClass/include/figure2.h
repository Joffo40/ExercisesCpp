#ifndef FIGURE2_H
#define FIGURE2_H


class Figure2
{
    public:
        Figure2();
        virtual ~Figure2();
        virtual int aire() const;

    protected:

    private:
};

class Triangle2 : public Figure2
{
    public:
        Triangle2(int base, int hauteur);
        virtual ~Triangle2();

        unsigned int Getm_base() { return m_base; }
        void Setm_base(unsigned int val) { m_base = val; }
        unsigned int Getm_hauteur() { return m_hauteur; }
        void Setm_hauteur(unsigned int val) { m_hauteur = val; }
        virtual int aire() const;

    protected:

    private:
        unsigned int m_base;
        unsigned int m_hauteur;
};

#endif // FIGURE2_H
