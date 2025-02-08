all: bookInfo cashier invmenu mainmenu reports

bookInfo: bookInfo.cpp
        g++ -std=c++20 -Wall -Werror -o bookInfo bookInfo.cpp

cashier: cashier.cpp
        g++ -std=c++20 -Wall -Werror -o cashier cashier.cpp

invmenu: invmenu.cpp
        g++ -std=c++20 -Wall -Werror -o invmenu invmenu.cpp

mainmenu: mainmenu.cpp
        g++ -std=c++20 -Wall -Werror -o mainmenu mainmenu.cpp

reports: reports.cpp
        g++ -std=c++20 -Wall -Werror -o reports reports.cpp

clean:
        -rm *.o run-test
