class ParkingLotTicket: public ParkingLotBase
{
	private:
		int ticID;
		time_t arrive_time;
		time_t leave_time;
		double total_time;
		double charge;
	public:
		ParkingLotTicket(ParkingLotBase a);
		double getTotalTime();
		double getCharge(ParkingLotBase a);
};
