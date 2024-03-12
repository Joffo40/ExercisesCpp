#ifndef FIGURE_H
#define FIGURE_H


class Figure
{
    public:
        //Figure();
        //virtual ~Figure();
        virtual void affiche() const;
        virtual double aire() const = 0;
        virtual void perimetre() const = 0;

    protected:

    private:

};

class Triangle : public Figure
{
    public:

        Triangle(double base, double hauteur);
        virtual ~Triangle();
        virtual void affiche() const;
        virtual double aire() const;
        virtual void perimetre() const;

    protected:

    private:
        double m_Base;
        double m_Hauteur;

};
class Carree : public Figure
{
    public:

        Carree(double cote);
        virtual ~Carree();
        virtual void affiche() const;
        virtual double aire() const;
        virtual void perimetre() const;

    protected:

    private:
        double m_Cote;

};
class Disque : public Figure
{
    public:

        Disque(double rayon);
        virtual ~Disque();
        virtual void affiche() const;
        virtual double aire() const;
        virtual void perimetre() const;

    protected:

    private:
        double m_Rayon;

};
#endif // FIGURE_H
