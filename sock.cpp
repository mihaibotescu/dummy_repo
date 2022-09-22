#include "client_sock_utils.h"
#include <vector>

ClientSock copy(ClientSock src){
	cout << "Copy function" << endl;
	return src;
}

int main () {
	ClientSock cliSock("127.0.0.1", 8080);
	ClientSock cliSock2("127.0.0.2", 35555);
	//ClientSock cliSock3 {cliSock2}; // copy ctor
//	ClientSock cliSock4 = std :: move (cliSock2) ; // move ctor
	ClientSock cliSock5 {std :: move (cliSock)}; // move ctor
	//cliSock5 = std :: move (cliSock2) ;// move = operator
	cliSock5.send_message("ceva mesaj de test");
	//cout << "First assignment: " << endl;
//	copy(cliSock);
//	cout << "2nd assignment: " << endl;
//	cliSock2 = std :: move (cliSock);
//	cliSock2.send_message("test");

}
