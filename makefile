CC = g++
EXE = ParkingLot
OBJ = main.o ParkingLotBase.o ParkingLotTicket.o

$(EXE) : $(OBJ)
	$(CC) -o $(EXE) $(OBJ)

main.o : main.cpp ParkingLotBase.h
	$(CC) -c main.cpp

ParkingLotBase.o : ParkingLotBase.cpp ParkingLotBase.h
	$(CC) -c ParkingLotBase.cpp

ParkingLotTicket.o : ParkingLotTicket.cpp ParkingLotTicket.h ParkingLotBase.h
	$(CC) -c ParkingLotTicket.cpp

.PHONY : clean
clean :
	rm $(OBJ)
