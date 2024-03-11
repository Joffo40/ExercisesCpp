#ifndef CHIFFRE_H
#define CHIFFRE_H


class chiffre
{
    public:
        chiffre();
        virtual ~chiffre();

        unsigned int Getm_Counter() { return m_Counter; }
        void Setm_Counter(unsigned int val) { m_Counter = val; }

        int calculAddition(chiffre const& b);

    protected:

    private:

        unsigned int m_Counter;
};

chiffre operator + (chiffre const& a, chiffre const& b);

#endif // CHIFFRE_H
