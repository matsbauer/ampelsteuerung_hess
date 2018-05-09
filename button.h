//Imlplementierung 
#ifndef _BUTTON
#define _BUTTON


class Button
{
  protected:                              
    bool  ;
  public:
    Cunter();
    Counter(int  n = 0);
    
    void setVal(int v);
    
    int getVal(){return count;};
    void inc()
    {
      count++;
      if(count == n)
      {
        count = 0;
      }   
    };

};

void Counter::setVal(int v)
{
  count = v;
}
