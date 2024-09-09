OBJS	= Farmer.o Farm.o FarmUnit.o Barn.o CropField.o FloodedSoil.o FruitfulSoil.o DrySoil.o FarmFactory.o FertiliserTruckFactory.o DeliveryTruckFactory.o CropFieldFactory.o BarnFactory.o Decorator.o ExtraBarn.o Fertiliser.o Depth-FirstTraversal.o Breadth-FirstTraversal.o DeliveryTruck.o FertiliserTruck.o testingMain.o
SOURCE	= Farmer.cpp Farm.cpp FarmUnit.cpp Barn.cpp CropField.cpp FloodedSoil.cpp FruitfulSoil.cpp DrySoil.cpp FarmFactory.cpp FertiliserTruckFactory.cpp DeliveryTruckFactory.cpp CropFieldFactory.cpp BarnFactory.cpp Decorator.cpp ExtraBarn.cpp Fertiliser.cpp Depth-FirstTraversal.cpp Breadth-FirstTraversal.cpp DeliveryTruck.cpp testingMain.cpp
HEADER	= Farmer.h Farm.h FarmUnit.h Barn.h CropField.h SoilSate.h FloodedSoil.h FruitfulSoil.h DrySoil.h FarmFactory.h FertiliserTruckFactory.h DeliveryTruckFactory.h CropFieldFactory.h BarnFactory.h Decorator.h ExtraBarn.h Fertiliser.h Iterator.h Depth-FirstTraversal.h Breadth-FirstTraversal.h Trucks.h DeliveryTruck.h
OUT	= a.out
FLAGS	= -g3 -c -Wall
LFLAGS	= 
CC	= g++

all:	a.out

a.out: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Farmer.o: Farmer.cpp
	$(CC) $(FLAGS) Farmer.cpp -lcppunit

Farm.o: Farm.cpp
	$(CC) $(FLAGS) Farm.cpp -lcppunit

FarmUnit.o: FarmUnit.cpp
	$(CC) $(FLAGS) FarmUnit.cpp -lcppunit

Barn.o: Barn.cpp
	$(CC) $(FLAGS) Barn.cpp -lcppunit

CropField.o: CropField.cpp
	$(CC) $(FLAGS) CropField.cpp -lcppunit

FloodedSoil.o: FloodedSoil.cpp
	$(CC) $(FLAGS) FloodedSoil.cpp -lcppunit

FruitfulSoil.o: FruitfulSoil.cpp
	$(CC) $(FLAGS) FruitfulSoil.cpp -lcppunit

DrySoil.o: DrySoil.cpp
	$(CC) $(FLAGS) DrySoil.cpp -lcppunit

FarmFactory.o: FarmFactory.cpp
	$(CC) $(FLAGS) FarmFactory.cpp -lcppunit

FertiliserTruckFactory.o: FertiliserTruckFactory.cpp
	$(CC) $(FLAGS) FertiliserTruckFactory.cpp -lcppunit

DeliveryTruckFactory.o: DeliveryTruckFactory.cpp
	$(CC) $(FLAGS) DeliveryTruckFactory.cpp -lcppunit

CropFieldFactory.o: CropFieldFactory.cpp
	$(CC) $(FLAGS) CropFieldFactory.cpp -lcppunit

BarnFactory.o: BarnFactory.cpp
	$(CC) $(FLAGS) BarnFactory.cpp -lcppunit

Decorator.o: Decorator.cpp
	$(CC) $(FLAGS) Decorator.cpp -lcppunit

ExtraBarn.o: ExtraBarn.cpp
	$(CC) $(FLAGS) ExtraBarn.cpp -lcppunit

Fertiliser.o: Fertiliser.cpp
	$(CC) $(FLAGS) Fertiliser.cpp -lcppunit

Depth-FirstTraversal.o: Depth-FirstTraversal.cpp
	$(CC) $(FLAGS) Depth-FirstTraversal.cpp -lcppunit

Breadth-FirstTraversal.o: Breadth-FirstTraversal.cpp
	$(CC) $(FLAGS) Breadth-FirstTraversal.cpp -lcppunit

FertiliserTruck.o: FertiliserTruck.cpp
	$(CC) $(FLAGS) FertiliserTruck.cpp -lcppunit
DeliveryTruck.o: DeliveryTruck.cpp
	$(CC) $(FLAGS) DeliveryTruck.cpp -lcppunit

testingMain.o: testingMain.cpp
	$(CC) $(FLAGS) testingMain.cpp -lcppunit

clean:
	rm -f $(OBJS) $(OUT)

run: a.out
	./a.out

valgrind: a.out
	valgrind a.out

valgrind_leakcheck: a.out
	valgrind --leak-check=full a.out

valgrind_extreme: a.out
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes a.out