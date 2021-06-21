#include <iostream>

using namespace std;


class Root{

};
/* fighter is an abstraction
*/
class fighter{
public:
    virtual int attack()=0;
};

/* all characters are not fighters TO FIX
*/
class Character:fighter{
protected:
    string name;
    int curHealth;
    int totHealth;
public:
    Character(string N, int cH, int tH){
        this->name = N;
        this->curHealth = cH;
        this->totHealth = tH;
    }
    void setName(string N){
        this->name = N;
    }
    void setCurHealth(int cH){
        this->curHealth = cH;
    }
    void setTotHealth(int tH){
        this->totHealth = tH;
    }
    void infoChar(){
        cout << this->name << " " << this->curHealth << " " << this->totHealth;
    }
    int attack(){
        cout << "yaaahh";
        return 3;
    }
    string getName(){
        return this->name;
    }
    int getcurHealth(){
        return this->curHealth;
    }
    int getTotHealth(){
        return this->totHealth;
    }
};
class Hero: public Character{
private:
    string surname;
public:
    Hero(string n, string sn, int curH, int totH)
    :Character(n, curH, totH)
    {
        this->surname = sn;
    }
    void infoChar(){
        cout << this->surname << " " << this->name << " " << this->curHealth << " " << this->totHealth;
    }
};
int main()
{
    Character ch("Jonathan", 100,100);
    ch.infoChar();

    return 0;
}
