#ifndef _FORCE_SENSOR_H 
#define _FORCE_SENSOR_H 

class ForceSensor
{
private:
    float value;

public:
    float getForceValue();

    void loadForceValue();
};

#endif