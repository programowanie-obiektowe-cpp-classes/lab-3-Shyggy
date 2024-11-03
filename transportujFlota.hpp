#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int      licz_zaglowcow = 0;
    int      transport_calkowity = 0;
    if (towar <= 0) {
        return 0;
    }
    else {
        while (transport_calkowity <= towar) 
        {
            Stocznia stocznia;
            Statek*  s1 = stocznia();
            if (dynamic_cast<Zaglowiec*>(s1) != nullptr) {
                licz_zaglowcow++;
            }
            int obecny_transport = s1->transportuj();
            transport_calkowity  = transport_calkowity + obecny_transport;
            delete s1;
        }
    
     return licz_zaglowcow;
    }

}