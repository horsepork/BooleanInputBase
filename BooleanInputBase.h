// this class exists to provide a convenient means to pass ain input object,
// whether directly from a digitalRead, shift register, or port expander,
// to another object (dials and kickers with limit switches, in our case)

#ifndef BOOLEANINPUTBASE_H
#define BOOLEANINPUTBASE_H

#include "Arduino.h"

class BooleanInputBase{
    public:
        void setInputType(int _inputType){
            inputType = _inputType;
        }

        void setState(bool newState){
            state = newState;
        }

        bool read(){
            if(inputType == INPUT_PULLUP){
                return !state;
            }
            return state;
        }
    private:
        bool state = false;
        int inputType = INPUT_PULLUP; // probably safe to assume, for most instances
};

#endif