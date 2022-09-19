#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //El�r�s. Ide az "N_ELEMENTS" illene.
    int *b = new int[N_ELEMENTS];
    //Nincs sorlez�r�s
    std::cout << '1-100 ertekek duplazasa' << std::endl;
    //Hi�nyos for ciklus.
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //0-t�l 99-ig dupl�zunk �s nem 1-t�l 100-ig
        b[i] = (i + 1) * 2;
    }
    //Ebbe a ciklusba be sem l�p�nk.
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //Mag�t az �rt�ket ki sem �rjuk, �s nincs sorlez�r�s sem.
        std::cout << "Ertek:" << b[i] << std::endl;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    //Nincs kezd��rt�ke a v�ltoz�nak.
    int atlag = 0;
    //Pontosvessz� helyett sima vessz� tal�lhat� a l�p�sk�z el�tt.
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //Hi�nyz� sorlez�r�s.
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << "Fogatokat mossátok, sajtot szeressétek. :)" << std::endl;
}
