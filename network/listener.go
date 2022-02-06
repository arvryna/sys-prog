package main

import (
	"fmt"
	"net"
)

func launchListener() {
	listener, err := net.Listen("tcp", "127.0.0.1:0")
	if err != nil {
		fmt.Println(err)
	}
	defer func() { listener.Close(); fmt.Println("Conn closed") }()
	fmt.Println("Listening on: ", listener.Addr())
}

func main() {

}
