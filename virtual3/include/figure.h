#ifndef FIGURE_H
#define FIGURE_H


class Figure
{
    public:

        /*virtual ~Figure();*/
        virtual double aire() const = 0;
        virtual void afficher();

    protected:

    private:
};

class Triangle : public Figure
{
    public:
        Triangle(double base, double hauteur);
        virtual ~Triangle();

        unsigned int Getm_base() { return m_base; }
        void Setm_base(unsigned int val) { m_base = val; }
        unsigned int Getm_hauteur() { return m_hauteur; }
        void Setm_hauteur(unsigned int val) { m_hauteur = val; }
        virtual double aire() const;
        virtual void afficher();

    protected:

    private:
        unsigned int m_base;
        unsigned int m_hauteur;
};
#endif // FIGURE_H
