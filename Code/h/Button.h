#ifndef BUTTON_H_
#define BUTTON_H_

/**
 * Class Button is used to control the button which specifies if the button is on (pass number established) or off (no number for pass)
 */

class Button 
{
	private:
        const int buttonOn = 1;     // Constant for Button on state
        const int buttonOff = 0;    // Constant for Button off state

		int state;              // Is the button on or off 0 off 1 on

        int number;             // If the button is on. This is the number that it is on 4,5,6,8,9,10

        int buttonState(int);    // Set the button state

	public:
		Button(void);           // Constructor

		int setState(int);      // Set the state of the button based on current state and roll number passed in
        int getState();         // Get the state of the button currently
        
};


#endif /* BUTTON_H_ */