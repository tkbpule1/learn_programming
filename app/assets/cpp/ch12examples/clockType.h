class clockType
{
public:
  void setTime(int hours, int minutes, int seconds);
    /*
       Function to set the time.
       The time is set according to the parameters.
       Postcondition: hr = hours; min = minutes; sec = seconds;

       The function checks whether the values of hours, minutes, and seconds
       are valid. If a value is invalid, the default value 0 is assigned.
    */

  void getTime(int& hours, int& minutes, int& seconds) const;
    /*
      Function to return the time.
      Postcondition: hours = hr; minutes = min; seoncds = sec;
    */

  void printTime() const;
    /*
      Function to print the time.
      Postcondition: The time is printed in the form: hh:mm:ss
    */

  void incrementSeconds();
    /*
      Function to increment the time by one second.
      Postcondition: The time is incremented by one second.
        If the before-increment time is 23:59:59, the time is reset to 00:00:00.
    */

  void incrementMinutes();
    /*
      Function to increment the time by one minute.
      Postcondition: The time is incremented by one minute.
        If the before-increment time is 23:59:53, the time is reset to 00:00:53.
    */

  void incrementHours();
    /*
      Function to increment the time by one hour.
      Postcondition: The time is incremented by one hour.
       If the before-increment time is 23:45:53, the time is reset to 00:45:53.
    */

  bool equalTime(const clockType& otherClock) const;
    /*
      Function to compare the two times.
      Postcondition: Returns true if this time is equal to otherClock;
                     Otherwise, returns false.
    */

  clockType(int hours, int minutes, int seconds);
    /*
      Constructor with paraments.
      The time is set according to the parameters.
      Postcondition: hr = hours; min = minutes; sec = seconds;
        The constructor checks whether the values of hours, minutes, and seconds
        are valid. If a value is invalid, the default value 0 is assigned.
    */

    clockType();
      /*
        Default Constructor.
        The time is set to 00:00:00.
        Postcondition: hr = 0; min = 0; sec = 0.
      */

private:
  int hr;   // variable to store the hours;
  int min;  // variable to store the minutes;
  int sec;  // variable to store the seconds;

};