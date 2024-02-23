#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string Driver;
    string VehicleNo;
    string Model;

public:
    Vehicle(string d, string v, string t) : Driver(d), VehicleNo(v), Model(t) {}

    string GetDriver() const { return Driver; }
    string GetVehicleNo() const { return VehicleNo; }
    string GetModel() const { return Model; }
};

class Bus : public Vehicle
{
public:
    Bus(string d, string v, string t) : Vehicle(d, v, t) {}
    string GetDestination()
    {
        return "Bus Destination";
    }
    string GetLoad()
    {
        return "Bus Load";
    }
};

class Lorry : public Vehicle
{
public:
    Lorry(string d, string v, string t) : Vehicle(d, v, t) {}
    string GetDestination()
    {
        return "Lorry Destination";
    }
    string GetLoad()
    {
        return "Lorry Load";
    }
};

class Saloon : public Vehicle
{
public:
    Saloon(string d, string v, string t) : Vehicle(d, v, t) {}
    string GetDestination()
    {
        return "Saloon Destination";
    }
    string GetLoad()
    {
        return "Saloon Load";
    }
};

int main()
{
    Bus D("Juma", "1234", "Bus");
    Lorry L("Eugine", "5678", "Lorry");
    Saloon S("Wambui", "672G", "Saloon");

     cout << "Driver\n: " << D.GetDriver() << ", Vehicle No\n: " << D.GetVehicleNo() <<", Model\n: " << D.GetModel() << endl;
    cout << "Driver\n: " << L.GetDriver() << ", Vehicle No\n: " << L.GetVehicleNo() << ", Model\n: " << L.GetModel() << endl;
    cout << "Driver\n: " << S.GetDriver() << ", Vehicle No\n: " << S.GetVehicleNo() << ", Model\n: " << S.GetModel() << endl;

    cout << "Destination\n: " << D.GetDestination() << ", Load\n: " << D.GetLoad() << endl;
    cout << "Destination\n: " << L.GetDestination() << ", Load\n: " << L.GetLoad() << endl;
    cout << "Destination\n: " << S.GetDestination() << ", Load\n: " << S.GetLoad() << endl;

    return 0;
}
