#ifndef VEHICLES_CAR_H
#define VEHICLES_CAR_H

//simple class
class Car {
public:
    Car(int maxGear);
    void shift(int gear);
    void accelerate();
    void brake();
    int getCurrentSpeed();
    int getCurrentGear();
private:
    int maxGear;
    int currentGear;
    int speed;
};

#endif
