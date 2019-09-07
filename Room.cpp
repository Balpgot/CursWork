#include "Room.h"

Room::Room():hotel("Ritz"),number("140"),level("Люкс"),capacity("2"),price("1600"),isBooked(false)
{
}

Room::Room(QString hotel, QString number, QString level, QString capacity, QString price, bool isBooked):
hotel(hotel),number(number),level(level),capacity(capacity),price(price),isBooked(isBooked)
{
}

Room::Room(Room &object):hotel(object.hotel),number(object.number),level(object.level),capacity(object.capacity),price(object.price),isBooked(object.isBooked)
{
}

Room::~Room()
{
}

bool Room::setInfo(QString infor)
{
    QStringList info = infor.split(" ");
    if(info.length()==6){
        this->setHotel(info[0]);
        this->setNumber(info[1]);
        this->setLevel(info[2]);
        this->setCapacity(info[3]);
        this->setPrice(info[4]);
        if(info[5].toInt()==1){
            this->setIsBooked(true);
        }
        else
            this->setIsBooked(false);
        return true;
    }
    return false;
}

QString Room::getHotel()
{
    return this->hotel;
}

void Room::setHotel(QString hotel)
{
    this->hotel = hotel;
}

QString Room::getNumber()
{
    return this->number;
}

void Room::setNumber(QString number)
{
    this->number = number;
}

QString Room::getLevel()
{
    return this->level;
}

void Room::setLevel(QString level)
{
    this->level = level;
}

QString Room::getCapacity()
{
    return this->capacity;
}

void Room::setCapacity(QString capacity)
{
    this->capacity = capacity;
}

QString Room::getPrice()
{
    return this->price;
}

void Room::setPrice(QString price)
{
    this->price = price;
}


QString Room::getIsBooked()
{
    if(isBooked){
        return "Занят";
    }
    return "Свободен";
}

void Room::setIsBooked(bool isBooked)
{
    this->isBooked = isBooked;
}

Room Room::operator =(const Room &object){
    if (&object == this)
        return *this;
    setHotel(object.hotel);
    setNumber(object.number);
    setLevel(object.level);
    setCapacity(object.capacity);
    setPrice(object.price);
    setIsBooked(object.isBooked);
    return *this;
}
