all: bookInfo cashier invmenu mainmenu reports

mainmenu: mainmenu.cpp cashier.o
	g++ -std=c++20 -Wall -Werror -o mainmenu mainmenu.cpp cashier.o

cashier.o: cashier.cpp
	g++ -std=c++20 -Wall -Werror -c cashier.cpp

bookInfo: bookInfo.cpp
	g++ -std=c++20 -Wall -Werror -o bookInfo bookInfo.cpp

invmenu: invmenu.cpp
	g++ -std=c++20 -Wall -Werror -o invmenu invmenu.cpp

reports: reports.cpp
	g++ -std=c++20 -Wall -Werror -o reports reports.cpp

clean:
	-rm *.o bookInfo cashier invmenu mainmenu reports
