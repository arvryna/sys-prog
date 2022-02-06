Essential network tools and its usecases

## [tcpdump](https://www.tcpdump.org/manpages/tcpdump.1.html)
- view all network traffic across all ports

## [Dig](https://linux.die.net/man/1/dig) . Hostname -> IP translator
``` dig googl.com ```

## [netstat](https://linux.die.net/man/8/netstat)
- Print network connections, routing tables, interface stats, masquerade connections, multicast memberships

## Scenario

* Dump all DNS traffic in server:
  - use tcp dump with these params ``` sudo tcpdump -l port 53 ```

* View routing table:
  - use netstat, ``` netstat -rn -f inet ``` 