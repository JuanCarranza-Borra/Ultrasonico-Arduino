class Ultrasonico{
  private: int _PinEcho,_PinTrigger;
  public: 
   void attach(int _Echo,int _Trigger);
   int GetDis(void);
};

void Ultrasonico::attach(int _Echo,int _Trigger)
 {
  _PinEcho = _Echo;
  _PinTrigger = _Trigger;
  pinMode(_Echo,INPUT);
  pinMode(_Trigger,OUTPUT);
 }

int Ultrasonico::GetDis(void)
{
  int _dis;
  digitalWrite(_PinTrigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(_PinTrigger,LOW);
  _dis = (pulseIn(_PinEcho,HIGH,10000)/2) /29;
  return(_dis);
}

