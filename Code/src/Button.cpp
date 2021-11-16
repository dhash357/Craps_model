
#include "../h/Button.h"


Button::Button() {

		this->state = buttonOff;    // initial state of the button is off


	}

/**
 * Name: setState
 * 
 * Desc: sets the state of the button based on st which is passed in
 * 
 * Param:   int roll    Current roll of the dice
 * 
 * Create Date: 21/11/16
 * Create By:   DJH
 * 
 * Modification:
 * 21/11/16 DJH Created
 * 
 */ 
int Button::setState(int roll)
{
	int ret;		// Value returned from the roll of the die

    if (state == buttonOn) {
        if (roll == 7) {
            buttonState (buttonOff);        // Turn the button off
        }

    } else {
        switch (roll) {
            case 4:
            case 5:
            case 6:
            case 8:
            case 9:
            case 10:
                buttonState (buttonOn);
                break;
        }
    }

    ret = state;

    return ret;
}   // setState

/**
 * Name: buttonState
 * 
 * Desc: sets the state of the button based on st which is passed in
 * 
 * Param:   int st  state which the Button will be set.
 * 
 * Create Date: 21/11/16
 * Create By:   DJH
 * 
 * Modification:
 * 21/11/16 DJH Created
 * 
 */ 

int Button::buttonState (int st) {

    state = st;

    return state;

}   // buttonState

/**
 * Name: getState
 * 
 * Desc: Returns the current state of the button
 * 
 * Create Date: 21/11/16
 * Create By:   DJH
 * 
 * Modification:
 * 21/11/16 DJH Created
 * 
 */ 

int Button::getState() {
    return state;
}   // getState