#include <stdio.h>
#include <pcap.h>

int main(int argc, char* argv[])
{
        char* dev, errbuf[PCAP_ERRBUF_SIZE];

        dev = pcap_lookupdev(errbuf);
        if (dev == NULL) {
            fprintf(stderr,"Couldn't find the default device: %s\n",errbuf);
            return (2);
        }
        printf("Device is : %s\n",dev);
        return 0;
}
