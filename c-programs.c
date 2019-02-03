
Few programming assignments to the class. 


1. Connet PC to two networks, one via cable and second via wifi. After that, print adapter name, IP address, subnet mask and default gateway for each network interface. Output can be printed in folliowing format.
 
    Network Adapter  IP Address          Subnet mask      Default Gateway
  ------------------------------------------------------------------------
    lan              192.168.1.10        255.255.255.0     192.168.1.5
    wifi             192.168.10.5        255.255.0.0       192.168.10.1


2. Run "ping" command to various addresses like google.com, microsoft.com, apple.com etc. Sort the addresses based on response time to ping. (Run ping commands 10 times and then take a average)

                 address             Average Time
            ------------------------------------------
                 google.com             70 ms 
                 apple.com              71 ms
                 coep.com               75 ms 
                 amazon.in              80 ms

3. Repeat problem 2 on separate networks. Eg. first run ping commands on lan network. Then run on wifi network. Print average time for both networks in sorted order
  Output can be like this:
    
     Network            address             Average Time
------------------------------------------------------------     
     lan                google.com          70 ms 
     lan                apple.com           71 ms
     wifi               coep.com            75 ms 
     wifi               amazon.in           80 ms
