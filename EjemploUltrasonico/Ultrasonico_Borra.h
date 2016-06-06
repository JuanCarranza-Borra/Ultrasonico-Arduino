class Ultrasonico{
  private: int _PinEcho,_PinTrigger;
  public: 
   Ultrasonico(int _Echo,int _Trigger){
     _PinEcho = _Echo;
  _PinTrigger = _Trigger;
  pinMode(_Echo,INPUT);
  pinMode(_Trigger,OUTPUT);
   }
   int GetDis(void);
};

int Ultrasonico::GetDis(void)
{
  int _dis;
  digitalWrite(_PinTrigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(_PinTrigger,LOW);
  _dis = (pulseIn(_PinEcho,HIGH)/2) /29;
  return(_dis);
}

