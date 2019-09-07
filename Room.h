#ifndef Room_H
#define Room_H
#include <QString>
#include <QStringList>

using namespace std;

class Room
{
private:
    QString hotel;
    QString number;
    QString level;
    QString capacity;
    QString price;
    bool isBooked;
public:
    Room();
    Room(QString hotel, QString number, QString level, QString capacity, QString price, bool isBooked);
    Room(Room &object);
    ~Room();
    bool setInfo(QString infor);
    QString getHotel();
    void setHotel(QString hotel);
    QString getNumber();
    void setNumber(QString number);
    QString getLevel();
    void setLevel(QString level);
    QString getCapacity();
    void setCapacity(QString capacity);
    QString getPrice();
    void setPrice(QString price);
    QString getIsBooked();
    void setIsBooked(bool isBooked);
    Room operator=(const Room &object);
};

#endif // Room_H
