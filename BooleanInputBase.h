// this class exists to provide a convenient means to pass ain input object,
// whether directly from a digitalRead, shift register, or port expander,
// to another object (dials and kickers with limit switches, in our case)

#ifndef BOOLEANINPUTBASE_H
#define BOOLEANINPUTBASE_H

#include "Arduino.h"

class BooleanInputBase{
    public:
        void setState(bool newState){
            state = newState;
        }

        bool read(){
            return state;
        }
    private:
        bool state;
};

#endif