#include<iostream>
#include<ctime>
#include"ParkingLotBase.h"
#include"ParkingLotTicket.h"

using namespace std;

ParkingLotTicket::ParkingLotTicket(ParkingLotBase a)
{
	ticID = 100 -  a.getPnum();
	cout<<"Your Ticket ID is "<<ticID<<endl;
	arrive_time = time(0);
}

double ParkingLotTicket::getTotalTime()
{
	this->leave_time = time(0);
	this->total_time = difftime(this->leave_time,this->arrive_time);

	return total_time;
}

double ParkingLotTicket::getCharge(ParkingLotBase a)
{
	this->total_time = this->getTotalTime();
	this->charge = this->total_time * a.getPrice();
	cout<<"Please Pay "<<this->charge<<" for Parking"<<endl;
	return this->charge;
}
