//Imlplementierung 
#ifndef _BUTTON
#define _BUTTON


class Button
{
  protected:   
    Button();
   
    //int button_state;
    char button_port;
    int pin;
    
  public:
    bool readButton();
};

Button::Button(char port, int pin)
{
  button_port = port;
  buttpn_pin  = pin;
  
  GPIO gpio(port);
  gpio.setInput(pin);
  
};

bool Button::readbutton(){
  return gpio.readBit(pin) 
};
