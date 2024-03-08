#ifndef FIGURE_H
#define FIGURE_H


class Figure
{
    public:
        Figure();
        virtual ~Figure();
        void afficher();
        virtual double aire() const = 0;
    protected:

    private:
};

class Triangle : public Figure
{
    public:
        Triangle(double base, double hauteur);
        virtual ~Triangle();
        void afficher();
        virtual double aire() const = 0;


    private:
    int m_base;
    int m_hauteur;
};
class Carree : public Figure
{
    public:
        Carree();
        virtual ~Carree();
        void afficher();
        virtual double aire() const = 0;


    private:
    int m_cote;
};
class Rectangle : public Figure
{
    public:
        Rectangle();
        virtual ~Rectangle();
        void afficher();
        virtual double aire() const = 0;


    private:
    int m_cote1;
    int m_cote2;
};
class Cercle : public Figure
{
    public:
        Cercle();
        virtual ~Cercle();
        void afficher();
        virtual double aire() const = 0;


    private:
    int m_rayon;
};
#endif // FIGURE_H
