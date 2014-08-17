#include<iostream>
#include<ctime>
#include<unistd.h>
#include"ParkingLotBase.h"
#include"ParkingLotTicket.h"


int main()
{
	ParkingLotBase a;
//	a.getPnum();
	ParkingLotTicket at1(a);
	sleep(10);
	at1.getCharge(a);

	ParkingLotTicket at2(a);
	sleep(5);
	at2.getCharge(a);

	return 0;
}
