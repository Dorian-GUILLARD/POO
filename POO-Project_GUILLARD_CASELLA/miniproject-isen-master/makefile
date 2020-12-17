STB_INCLUDE_PATH = ./extern/stb

CFLAGS = -std=c++11 -g -I$(STB_INCLUDE_PATH) -Isrc
LDFLAGS =

APP = FigureCreator
OBJ = miniproj.o Menu.o Drawing.o Figure.o Croix.o Point.o Rectangle.o Carre.o


$(APP): $(OBJ)
	g++ $(CFLAGS) -o $(APP) $(OBJ) $(LDFLAGS)
Menu.o: src/Menu.cpp
	g++ $(CFLAGS) -c  src/Menu.cpp $(LDFLAGS)
miniproj.o: miniproj.cpp
	g++ $(CFLAGS) -c miniproj.cpp $(LDFLAGS)
Drawing.o: src/Drawing.cpp
	g++ $(CFLAGS) -c src/Drawing.cpp $(LDFLAGS)

Figure.o: src/Figure.cpp
	g++ $(CFLAGS) -c  src/Figure.cpp $(LDFLAGS)
Croix.o: src/Croix.cpp
	g++ $(CFLAGS) -c  src/Croix.cpp $(LDFLAGS)
Point.o: src/Point.cpp
	g++ $(CFLAGS) -c  src/Point.cpp $(LDFLAGS)
Rectangle.o: src/Rectangle.cpp
	g++ $(CFLAGS) -c  src/Rectangle.cpp $(LDFLAGS)
Carre.o: src/Carre.cpp
	g++ $(CFLAGS) -c  src/Carre.cpp $(LDFLAGS)

.PHONY: test clean

clean:
	rm -f $(APP)
	rm -f *.o
