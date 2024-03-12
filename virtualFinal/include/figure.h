#ifndef FIGURE_H
#define FIGURE_H


class Figure
{
    public:
        //Figure();
        //virtual ~Figure();
        virtual void affiche();
        virtual double aire() = 0;
        //virtual double perimetre() = 0;

    protected:

    private:

};

class Triangle : public Figure
{
    public:

        Triangle(double base, double hauteur);
        virtual ~Triangle();
        virtual void affiche() ;
        virtual double aire() ;

    protected:

    private:
        double m_Base;
        double m_Hauteur;

};
#endif // FIGURE_H
