#include<iostream>
#include"ParkingLotBase.h"

using namespace std;

ParkingLotBase::ParkingLotBase()
{
	pnum = 100;
	price_per_sec = 0.01;
}


int ParkingLotBase::getPnum()
{
	cout<<"Welcome to the Parking Lot!"<<endl;
	if(this->pnum <= 0)
	{
		cout<<"Sorry We are FULL!"<<endl;
		return 0;
	}
	this->pnum--;
	cout<<"The parking left is "<<this->pnum<<endl;
	cout<<"Please Notice the Parking Price is $"<<this->price_per_sec<<" per second"<<endl;
	return this->pnum;
}

double ParkingLotBase::getPrice()
{
	return this->price_per_sec;
}
