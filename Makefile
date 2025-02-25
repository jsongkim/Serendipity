all: mainmenu

mainmenu: mainmenu.cpp cashier.o invmenu.o reports.o
	g++ -std=c++20 -Wall -Werror -o mainmenu mainmenu.cpp cashier.o invmenu.o reports.o

cashier.o: cashier.cpp
	g++ -std=c++20 -Wall -Werror -c cashier.cpp

invmenu.o: invmenu.cpp
	g++ -std=c++20 -Wall -Werror -c invmenu.cpp

reports.o: reports.cpp
	g++ -std=c++20 -Wall -Werror -c reports.cpp

clean:
	-rm *.o mainmenu
