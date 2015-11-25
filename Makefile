all:
	g++ main.cpp -Wall -o test -lcurl -lssl -lcrypto
	clear
	./test
	rm ./test